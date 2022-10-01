/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:35:12 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/21 02:12:32 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include"Weapon.hpp"

class HumanA{
    std::string name;
    Weapon *wp;
    public:
        HumanA(std::string name,Weapon &wp);
        void attack(void);
};
#endif