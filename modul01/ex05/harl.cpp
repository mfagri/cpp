/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 05:03:25 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/21 05:31:39 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void Harl::debug( void )
{
      std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
              <<  "I really do!\n";
}
void Harl::info( void )
{
     std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put"
              << " enough bacon in my burger! If you did, I wouldn't be asking for more!\n";

}
void Harl::warning( void )
{
   std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for"
              << "years whereas you started working here since last month.\n";
    
}
void Harl::error( void )
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void    Harl::complain( std::string level ){
    typedef void(Harl::*memf)(void);
    memf fonctions[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    std::string names[4]={"DEBUG","INFO","WARNING","ERROR"};
    while (level != names[i])
        i++;
    (this->*fonctions[i])();
}