/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:21:34 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 21:57:32 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP 
#define WEAPON_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <stdlib.h>


class Weapon{
    std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string &getType();
        void setType(std::string type);
};

#endif