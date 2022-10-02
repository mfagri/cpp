/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:50:33 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/02 18:02:36 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Polymorphism.hpp"

class Cat : public Animal {
  public:
    Cat();
    ~Cat();
    Cat(std::string type);
    Cat(const Cat &copy);
    Cat &operator = (Cat const &a);
    void makeSound() const;
    std::string getType(void) const;
};

#endif