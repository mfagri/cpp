/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:15:36 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/16 10:24:37 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &wp):name(name),wp(&wp)
{
}

void HumanA::attack(void)
{
    std::cout<<name<< " attack with their " <<wp->getType()<<std::endl;
}