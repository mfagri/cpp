/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:15:36 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 21:57:09 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &wp):wp(&wp)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout<<name<< " attack with their " <<wp->getType()<<std::endl;
}