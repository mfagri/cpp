/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:36:34 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/16 10:05:24 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *wp;
    public:
        void attack();
        void setWeapon(Weapon& w);
        HumanB(std::string s);  
};
#endif