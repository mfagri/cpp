/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:17:43 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 21:57:18 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "string"
#include "Weapon.hpp"

HumanB::HumanB(std::string s)
{
    name = s;
}

HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon& w)
{
    wp = &w;
}

void HumanB::attack()
{
    std::cout<<name<<" attack with their "<<wp->getType()<<std::endl;
}
