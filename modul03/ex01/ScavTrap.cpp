/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:05:13 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/24 16:15:39 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
   std::cout<<"ScavTrap Destructor called"<<std::endl;
}

ScavTrap::ScavTrap()
{
   std::cout<<"ScavTrap Default constructor called"<<std::endl;
}

ScavTrap &ScavTrap::operator = (ScavTrap const &a)
{
    std::cout<<"ScavTrap Copy assignment operator called"<<std::endl;
    name = a.name;
    epoints = a.epoints;
    hpoints = a.hpoints;
    attackd = a.attackd;
    return (*this);
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Default constructor called"<<std::endl;
    this->name = name;
    epoints = 100;
    hpoints = 50;
    attackd = 20;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap Copy constructor called"<<std::endl;
    *this = copy;
}
// void ScavTrap::attack(const std::string& target)
// {
//     if(hpoints > 0 && epoints > 0)
//     {
//         std::cout <<name<<" attacks "<<target<<" ,Causing "<<attackd<<" points of damage!"<<std::endl;
//         epoints--;
//         if(epoints <= 0)
//             epoints = 0;
//     }
//     return;
// }

void ScavTrap::guardGate(void)
{
    std::cout<<"ScavTrap is now in Gate keeper mode."<<std::endl;
}