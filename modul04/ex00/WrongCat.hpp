/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:10:22 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/26 23:56:53 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat(std::string name);
    WrongCat(const WrongCat &copy);
    WrongCat &operator = (WrongCat const &a); 
    void makeSound() const;
    std::string getType(void) const;
};
#endif