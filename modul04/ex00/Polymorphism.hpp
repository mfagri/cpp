/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:52:45 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/02 18:02:49 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
    Animal();
    virtual~Animal();
    Animal(std::string name);
    Animal(const Animal &copy);
    Animal &operator = (Animal const &a);
    virtual void makeSound() const;
    std::string getType(void) const;
};

#endif