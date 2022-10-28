/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:55:17 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/27 16:16:33 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
   std::cout<<"Cat destructor called"<<std::endl;
   delete brain;
}

Cat::Cat()
{
   std::cout<<"Cat default constructor called"<<std::endl;
   type = "Cat";
   brain = new Brain();
}

Cat &Cat::operator = (Cat const &a)
{
    std::cout<<"Cat copy assignment operator called"<<std::endl;
    type = a.type;
    this->brain = new Brain();
    if(this != &a)
        *brain = *a.brain;
    return (*this);
}
Cat::Cat(std::string type)
{
    std::cout << "Cat Default constructor called"<<std::endl;
    this->type = type;
}
Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called"<<std::endl;
    *this = copy;
}

void Cat::makeSound() const
{
      std::cout << "The cat says: meow meow \n";
}

std::string Cat::getType(void) const
{
    return (this->type);
}