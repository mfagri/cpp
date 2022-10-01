/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:24:16 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/01 19:41:16 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
   std::cout<<"Destructor called"<<std::endl;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &a)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    name = a.name;
    epoints = a.epoints;
    hpoints = a.hpoints;
    attackd = a.attackd;
    return (*this);
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called"<<std::endl;
    this->name = name;
    epoints = 10;
    hpoints = 10;
    attackd = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called"<<std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string& target)
{
    if(hpoints > 0 && epoints > 0)
    {
    std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" ,Causing "<<attackd<<" points of damage!"<<std::endl;
    epoints--;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hpoints > 0 && epoints > 0)
    {
        hpoints -= amount;
        std::cout<<"ClapTrap "<<name<<" take damage "<<amount<<" of hit points!"<<std::endl;
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
    }
    return;
}