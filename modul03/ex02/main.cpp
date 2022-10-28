/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:33:23 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/23 23:49:49 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap mfagri("marouane");
    ClapTrap nano("nano");
    ScavTrap hh("rrt");
    FragTrap gg("frag");
    
    hh.attack("mmmmmmmmmmmm");
    mfagri.attack("eco");
    mfagri.beRepaired(10);
    mfagri.takeDamage(10);
    nano = mfagri;
    nano.attack("eco");
    nano.beRepaired(10);
    nano.takeDamage(10);
    gg.highFivesGuys();
    gg.attack("zoro");
    gg.beRepaired(13);
}