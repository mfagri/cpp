/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:33:23 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/24 16:06:11 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ScavTrap hh("Child");
    ClapTrap mfagri("Zoro");
    ClapTrap nano("Eclipse");
    mfagri.attack("Fire Ball");
    hh.attack("eco");
    mfagri.beRepaired(10);
    mfagri.takeDamage(10);
    nano = mfagri;
    nano.attack("eco");
    nano.takeDamage(10);
    nano.beRepaired(10);
}