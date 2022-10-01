/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:24:16 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/01 19:19:07 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
   std::cout<<"Destructor called"<<std::endl;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &a)
{
    name = a.name;
    epoints = a.epoints;
    hpoints = a.hpoints;
    attackd = a.attackd;
    return (*this);
}
ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    epoints = 10;
    hpoints = 10;
    attackd = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
   // std::cout << "Copy constructor called"<<std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string& target)
{
    if(hpoints > 0 && epoints > 0)
    {
    std::cout<<"ClapTrap"<<name<<"attacks"<<target<<" ,Causing"<<attackd<<"points of damage!"<<std::endl;
    hpoints--;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hpoints > 0 && epoints > 0)
    {
        hpoints = amount;
        std::cout<<"ClapTrap"<<name<<"take damage"<<attack<<" of hit points!"<<std::endl;
        hpoints--;
    }
    return;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hpoints > 0 && epoints > 0)
    {
        hpoints = amount;
        std::cout<<"ClapTrap"<<name<<"get"<<hpoints<<" hit points back!"<<std::endl;
        epoints--;
    }
    return;
}