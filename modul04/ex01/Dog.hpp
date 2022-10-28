/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:52:10 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/27 15:46:59 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  private:
    Brain *brain;
  public:
    Dog();
    virtual ~Dog();
    Dog(std::string type);
    Dog(const Dog &copy);
    Dog &operator = (Dog const &a);
    void makeSound() const;
    std::string getType(void) const;
};

#endif