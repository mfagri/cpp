/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:51:45 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/04 21:11:46 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void printelement( T const &a)
{
    std::cout<<a<<std::endl;
}
template <typename T>
void iter(T arr[],int size, void(*f)(T const &a))
{
    int i;

    i = 0;
    while(i < size)
    {
        f(arr[i]);
        i++;
    }
}
#endif