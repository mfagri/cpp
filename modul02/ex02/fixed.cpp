/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:09:56 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/01 19:41:03 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

const int Fixed::f = 8;

Fixed::Fixed()
{
    //std::cout<<"Default constructor called"<<std::endl;
    raw = 0;
}

Fixed::Fixed(const Fixed &copy)
{
   // std::cout << "Copy constructor called"<<std::endl;
    *this = copy;
}

int Fixed::getRawBits( void ) const
{
   // std::cout << "getRawBits member function called"<<std::endl;
    return(raw);
}


void Fixed::setRawBits( int const raw )
{
   // std::cout << "setRawBits member function called"<<std::endl;
    this->raw = raw;
}

Fixed::~Fixed()
{
   // std::cout<<"Destructor called"<<std::endl;
}

Fixed &Fixed::operator = (Fixed const &a)
{
    //std::cout<<"Copy assignment operator called"<<std::endl;
    this->raw = a.raw;
    return (*this);
}
Fixed Fixed::operator + (Fixed const &a)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    Fixed res(toFloat()+a.toFloat());
    return(res);
}
Fixed Fixed::operator - (Fixed const &a)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    Fixed res(toFloat()-a.toFloat());
    return(res);
}
Fixed Fixed::operator * (Fixed const &a)
{
    //std::cout<<"Here"<<std::endl;
    Fixed res(toFloat()*a.toFloat());
    return(res);
    
}
Fixed Fixed::operator / (Fixed const &a)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    Fixed res(toFloat()/a.toFloat());
    return(res);
}
bool operator== (const Fixed& c1, const Fixed& c2)
{
    return c1.toFloat() == c2.toFloat();
}

bool operator!= (const Fixed& c1, const Fixed& c2)
{
    return c1.toFloat() != c2.toFloat();
}

bool operator< (const Fixed& c1, const Fixed& c2)
{
    return c1.toFloat() < c2.toFloat();
}

bool operator> (const Fixed& c1, const Fixed& c2)
{
    return c1.toFloat() > c2.toFloat();
}

bool operator<= (const Fixed& c1, const Fixed& c2)
{
    return c1.toFloat()<= c2.toFloat();
}

bool operator>= (const Fixed& c1, const Fixed& c2)
{
    return c1.toFloat() >= c2.toFloat();
}

Fixed &Fixed::operator++(void)
{
    raw++;
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed t;
    t = *this;
    ++*this;
    return(t);
}
Fixed Fixed::operator--(int)
{
    Fixed t;
    t = *this;
    --*this;
    return(t);
}
Fixed &Fixed::operator--(void)
{
    raw--;
    return(*this);
}
Fixed::Fixed(const int i)
{
  //  std::cout<<"Int constructor called\n";
  this->raw = roundf(i *power(2,f));
}
Fixed::Fixed(const float i)
{
  //std::cout<<"Float constructor called\n";
  this->raw = roundf(i *power(2,f));
}
float Fixed::toFloat( void ) const{
    return(raw/power(2,f));
}
int Fixed::toInt( void ) const{
    
    return(roundf((raw/power(2,f))));
}
float power(int b,int n)
{
    int i;
    int r;
    r = 1;
    i = 0;
    while(i < n)
    {
        r = b*r;
        i++;
    }
    return (r);
}
Fixed&  Fixed:: max(Fixed  &a,Fixed  &b)
{
    if(a > b)
        return(a);
    else
        return(b);
}

Fixed  Fixed:: max(Fixed  const &a,Fixed  const &b)
{
    Fixed t;
    if(a > b)
        t.raw = a.raw;
    else
        t.raw = b.raw;
    return (t);
}
std::ostream& operator<<(std::ostream& os, Fixed const &dt)
{
    os << dt.toFloat();
    return os;
}