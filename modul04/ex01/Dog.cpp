/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:55:21 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/28 17:12:07 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
   std::cout<<"Dog destructor called"<<std::endl;
   delete brain;
}

Dog::Dog()
{
   std::cout<<"Dog default constructor called"<<std::endl;
   type = "Dog";
   brain = new Brain();
}

Dog &Dog::operator = (Dog const &a)
{
    std::cout<<"Dog copy assignment operator called"<<std::endl;
    type = a.type;
    this->brain = new Brain();
    if(this != &a)
        *brain = *a.brain;
    return (*this);
}

Dog::Dog(std::string type)
{
    std::cout << "Dog Default constructor called"<<std::endl;
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
    return (this->type);
}