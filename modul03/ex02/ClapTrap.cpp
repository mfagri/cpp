/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:24:16 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/23 19:08:55 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
   std::cout<<"ClapTrap Destructor called"<<std::endl;
}

ClapTrap::ClapTrap()
{
   std::cout<<"ClapTrap Default constructor called"<<std::endl;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &a)
{
    std::cout<<"ClapTrap Copy assignment operator called"<<std::endl;
    name = a.name;
    epoints = a.epoints;
    hpoints = a.hpoints;
    attackd = a.attackd;
    return (*this);
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Default constructor called"<<std::endl;
    this->name = name;
    epoints = 10;
    hpoints = 10;
    attackd = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy constructor called"<<std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string& target)
{
    if(hpoints > 0 && epoints > 0)
    {
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" ,Causing "<<attackd<<" points of damage!"<<std::endl;
        epoints--;
        if(epoints <= 0)
            epoints = 0;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hpoints > 0 && epoints > 0)
    {
        std::cout<<"ClapTrap "<<name<<" take damage "<<amount<<" of hit points!"<<std::endl;
        hpoints -= amount;
	    if (hpoints <= 0)
		    hpoints = 0;
    }
    return;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hpoints > 0 && epoints > 0)
    {
        std::cout<<"ClapTrap "<<name<<" get "<<amount<<" hit points back!"<<std::endl;
        hpoints += amount;
        epoints--;
        if(epoints <= 0)
            epoints = 0;
    }
    return;
}