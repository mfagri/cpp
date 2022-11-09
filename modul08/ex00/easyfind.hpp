/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:38:57 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/07 18:07:21 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template <typename T>
void easyfind(T type,int n)
{
    if((std::find(type.begin(), type.end(), n) == type.end()))
        std::cout<<"Element not found.\n";
    else
        std::cout<<"Element found: "<<n<<std::endl;
}

#endif