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

#include "harlFilter.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

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
    int i;
    i = 0;
    std::string l[4] = {"DEBUG","INFO","WARNING","ERROR"};
    while(l[i] != level)
        i++;
    while (i < 4)
    {
        switch (i)
        {
            case 0:
                std::cout << "[ " << l[0] << " ]" << std::endl;
                this->debug();
                std::cout << std::endl;
                break;;
            case 1:
                std::cout << "[ " << l[1] << " ]" << std::endl;
                this->info();
                std::cout << std::endl;
                break;
            case 2:
                std::cout << "[ " << l[2] << " ]" << std::endl;
                this->warning();
                std::cout << std::endl;
                break;
            case 3:
                std::cout << "[ " << l[3] << " ]" << std::endl;
                this->error();
                std::cout << std::endl;
                break;
        }
        i++;
    }
}