/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:08:47 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/28 19:50:43 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
  private:  
    int   raw;
    static const int f;
  public:
    Fixed();
    Fixed(Fixed &copy);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator = (Fixed &a);
    ~Fixed();
};
#endif