/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:05:18 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/12 20:51:00 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

std::string Zombie::getName()
{
    return(name);
}

Zombie::Zombie()
{
    std::cout << "Zombie created\n";
}
void Zombie::setname(std::string s)
{
    name = s;
}

Zombie::~Zombie()
{
    std::cout <<getName() << " Zombie deleted\n";
}

void randomChump( std::string name )
{
    Zombie l;
    l.setname(name);
    l.announce();
}

Zombie* newZombie( std::string name )
{
    Zombie *znew;
    znew = new Zombie;
    znew->setname(name);
    return (znew);
}