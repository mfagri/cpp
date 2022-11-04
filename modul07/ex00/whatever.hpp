/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:16:55 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/04 17:40:38 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a,T&b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename T> 
T max(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T> 
T min(T x, T y)
{
    return (x < y) ? x : y;
}

#endif