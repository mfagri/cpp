/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:09:56 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/28 20:13:41 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
const int Fixed::f = 8;
Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    raw = 0;
}

Fixed:: Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called"<<std::endl;
    *this = copy;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called"<<std::endl;
    return(raw);
}


void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called"<<std::endl;
    this->raw = raw;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

Fixed &Fixed::operator = (Fixed &a)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->raw = a.getRawBits();
    return (*this);
}