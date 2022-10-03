/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:07:23 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/03 21:41:01 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual~WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator = (WrongAnimal const &a); 
        virtual void makeSound() const;
        virtual std::string getType(void) const;
};
#endif