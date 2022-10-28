/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:50:33 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/27 15:46:50 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  private:
    Brain *brain;
  public:
    Cat();
    virtual ~Cat();
    Cat(std::string type);
    Cat(const Cat &copy);
    Cat &operator = (Cat const &a);
    void makeSound() const;
    std::string getType(void) const;
};

#endif