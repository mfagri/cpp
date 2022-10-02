/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:52:42 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/02 18:01:01 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

Animal::~Animal()
{
   std::cout<<"Animal destructor called"<<std::endl;
}

Animal::Animal()
{
   std::cout<<"Animal default constructor called"<<std::endl;
   type = "Animal";
}

Animal &Animal::operator = (Animal const &a)
{
    std::cout<<"Animal copy assignment operator called"<<std::endl;
    type = a.type;
    return (*this);
}
Animal::Animal(std::string type)
{
    std::cout << "Animal Default constructor called"<<std::endl;
    this->type = type;
}
Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called"<<std::endl;
    *this = copy;
}

void Animal::makeSound() const {
      std::cout << "The animal makes a sound \n";
}

std::string Animal::getType(void) const
{
    return (this->type);
}    