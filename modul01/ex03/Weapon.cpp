/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:37:08 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/16 05:58:59 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

const std::string &Weapon::getType()
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}