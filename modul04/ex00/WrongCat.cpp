/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:23:20 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/26 23:47:41 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
   std::cout<<"WrongCat destructor called"<<std::endl;
}

WrongCat::WrongCat()
{
   std::cout<<"WrongCat default constructor called"<<std::endl;
   type = "WrongCat";
}

WrongCat &WrongCat::operator = (WrongCat const &a)
{
    std::cout<<"WrongCat copy assignment operator called"<<std::endl;
    type = a.type;
    return (*this);
}
WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat Default constructor called"<<std::endl;
    this->type = type;
}
WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called"<<std::endl;
    *this = copy;
}

void WrongCat::makeSound() const
{
      std::cout << "The fake cat says: meow meow \n";
}

std::string WrongCat::getType(void) const
{
    return ("WrongCat");
}