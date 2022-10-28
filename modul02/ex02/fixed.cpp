/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:09:56 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/20 17:03:25 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

const int Fixed::f = 8;

Fixed::Fixed()
{
    raw = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

int Fixed::getRawBits( void ) const
{
    return(raw);
}


void Fixed::setRawBits( int const raw )
{
    this->raw = raw;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator = (Fixed const &a)
{
    this->raw = a.raw;
    return (*this);
}

Fixed Fixed::operator + (Fixed const &a)
{
    Fixed res(toFloat() + a.toFloat());
    return(res);
}

Fixed Fixed::operator - (Fixed const &a)
{
    Fixed res(toFloat() - a.toFloat());
    return(res);
}

Fixed Fixed::operator * (Fixed const &a)
{
    Fixed res(toFloat() * a.toFloat());
    return(res);
    
}

Fixed Fixed::operator / (Fixed const &a)
{
    Fixed res(toFloat() / a.toFloat());
    return(res);
}

bool Fixed::operator== (const Fixed& c2) const
{
    if(this->toFloat() == c2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator!= (const Fixed& c2) const
{
    if(this->toFloat() != c2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator< (const Fixed& c2) const
{
    if(this->toFloat() < c2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator> (const Fixed& c2) const
{
    if(this->toFloat() > c2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator<= (const Fixed& c2) const
{
    if(this->toFloat() <= c2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator>= (const Fixed& c2) const
{
    if(this->toFloat() >= c2.toFloat())
        return (true);
    else
        return (false);
}

Fixed Fixed::operator++(void)
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
   
Fixed Fixed::operator--(void)
{
    raw--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed t;
    t = *this;
    --*this;
    return(t);  
}


Fixed::Fixed(const int i)
{
  this->raw = roundf(i *power(2,f));
}

Fixed::Fixed(const float i)
{
  this->raw = roundf(i *power(2,f));
}

float Fixed::toFloat( void ) const
{
    return(raw/power(2,f));
}

int Fixed::toInt( void ) const
{
    
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

Fixed&  Fixed:: min(Fixed  &a,Fixed  &b)
{
    if(a < b)
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

Fixed  Fixed:: min(Fixed  const &a,Fixed  const &b)
{
    Fixed t;
    if(a < b)
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