/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:28 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/03 20:57:37 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALA_HPP
#define ANIMALA_HPP

#include <iostream>

class AnimalA{
    protected:
        std::string type;
    public:
        AnimalA();
        virtual ~AnimalA();
        AnimalA(const AnimalA &copy);
        AnimalA &operator = (AnimalA const &a);
        virtual void makeSound(void) const = 0;
        virtual std::string getType(void) const;
};

#endif