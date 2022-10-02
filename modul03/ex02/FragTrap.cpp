/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:10:23 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/02 15:31:33 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
   std::cout<<"Destructor called"<<std::endl;
}

FragTrap::FragTrap()
{
   std::cout<<"Default constructor called"<<std::endl;
}

FragTrap &FragTrap::operator = (FragTrap const &a)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    name = a.name;
    epoints = a.epoints;
    hpoints = a.hpoints;
    attackd = a.attackd;
    return (*this);
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "Default constructor called"<<std::endl;
    this->name = name;
    epoints = 100;
    hpoints = 100;
    attackd = 30;
}
FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "Copy constructor called"<<std::endl;
    *this = copy;
}

void FragTrap::attack(const std::string& target)
{
    if(hpoints > 0 && epoints > 0)
    {
        std::cout<<"FragTrap "<<name<<" attacks "<<target<<" ,Causing "<<attackd<<" points of damage!"<<std::endl;
        epoints--;
        if(epoints <= 0)
            epoints = 0;
    }
    return;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"High fives"<<std::endl;
}