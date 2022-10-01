/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:03:14 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/16 03:00:33 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N,std::string name)
{
    Zombie *n = new Zombie[N];
    int i;
    i = 0;
    while (i < N)
    {
        n[i].setname(name);
        i++;
    }
    return (n);
}