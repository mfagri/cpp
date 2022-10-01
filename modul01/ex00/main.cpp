/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:21:12 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/12 21:25:42 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    
    Zombie *newz;

    newz = newZombie("Z1");
    newz->announce();
    delete newz;
    std::cout << "*****************" << std::endl;
    randomChump("Z2");
    return (0);
}