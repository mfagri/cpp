/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:35:12 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 21:55:07 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include"Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon *wp;
    public:
        HumanA(std::string name,Weapon &wp);
        ~HumanA();
        void attack(void);
};

#endif