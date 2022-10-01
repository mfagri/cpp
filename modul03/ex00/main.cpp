/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:33:23 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/01 19:42:32 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap mfagri("marouane");
    ClapTrap nano("nano");
    mfagri.attack("eco");
    mfagri.beRepaired(10);
    mfagri.takeDamage(10);
    nano = mfagri;
    nano.attack("eco");
    nano.beRepaired(10);
    nano.takeDamage(10);
}