/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:36:33 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/03 20:17:35 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AnimalA.hpp"

AnimalA::~AnimalA()
{
   std::cout<<"AnimalA destructor called"<<std::endl;
}

AnimalA::AnimalA()
{
   std::cout<<"AnimalA default constructor called"<<std::endl;
   type = "AnimalA";
}

AnimalA &AnimalA::operator = (AnimalA const &a)
{
    std::cout<<"AnimalA copy assignment operator called"<<std::endl;
    type = a.type;
    return (*this);
}
AnimalA::AnimalA(const AnimalA &copy)
{
    std::cout << "AnimalA copy constructor called"<<std::endl;
    *this = copy;
}

// AnimalA::makeSound()=0;

std::string AnimalA::getType(void) const
{
    return (this->type);
}   