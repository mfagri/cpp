/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal .cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:18:15 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/02 19:18:54 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
   std::cout<<"WrongAnimal destructor called"<<std::endl;
}

WrongAnimal::WrongAnimal()
{
   std::cout<<"WrongAnimal default constructor called"<<std::endl;
   type = "WrongAnimal";
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &a)
{
    std::cout<<"WrongAnimal copy assignment operator called"<<std::endl;
    type = a.type;
    return (*this);
}
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Default constructor called"<<std::endl;
    this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called"<<std::endl;
    *this = copy;
}

void WrongAnimal::makeSound() const {
      std::cout << "The WrongAnimal makes a sound \n";
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}   