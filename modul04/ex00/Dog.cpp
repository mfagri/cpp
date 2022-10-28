/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:55:21 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/26 18:14:56 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
   std::cout<<"Dog destructor called"<<std::endl;
}

Dog::Dog()
{
   std::cout<<"Dog default constructor called"<<std::endl;
   type = "Dog";
}

Dog &Dog::operator = (Dog const &a)
{
    std::cout<<"Dog copy assignment operator called"<<std::endl;
    type = a.type;
    return (*this);
}

Dog::Dog(std::string type)
{
    std::cout << "Dog parametre constructor called"<<std::endl;
    this->type = type;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called"<<std::endl;
    *this = copy;
}

void Dog::makeSound() const
{
    std::cout << "The dog says: bow wow \n";
}

std::string Dog::getType(void) const
{
    return ("Dog");
}