/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:08:47 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/01 16:41:35 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include<cmath>
class Fixed{
  private:  
    int   raw;
    static const int f;
  public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed(const int i);
    Fixed(const float i);
    static Fixed & max(Fixed  &a,Fixed  &b);
    static Fixed  max(Fixed  const &a,Fixed  const &b);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator = (Fixed const &a);
    Fixed operator + (Fixed const &a);
    Fixed operator - (Fixed const &a);
    Fixed operator * (Fixed const &a);
    Fixed operator / (Fixed const &a);
    Fixed &operator ++(void);
    Fixed operator ++(int);
    Fixed &operator --(void);
    Fixed operator --(int);
    friend bool operator== (const Fixed& c1, const Fixed& c2);
    friend bool operator!= (const Fixed& c1, const Fixed& c2);
    friend bool operator< (const Fixed& c1, const Fixed& c2);
    friend bool operator> (const Fixed& c1, const Fixed& c2);
    friend bool operator<= (const Fixed& c1, const Fixed& c2);
    friend bool operator>= (const Fixed& c1, const Fixed& c2);
    
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream &operator << (std::ostream& os, const Fixed &dt);
float power(int b,int n);
#endif