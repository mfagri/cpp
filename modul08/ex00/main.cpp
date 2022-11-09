/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:57:20 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/09 11:41:03 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> eco;
    std::array<int,5> a1 = {1,2,3,4,5};
    eco.push_back(1);
    eco.push_back(2);
    eco.push_back(3);
    eco.push_back(4);
    eco.push_back(5);
    easyfind(eco,5);
    easyfind(a1,22);
}