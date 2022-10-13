/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:40:33 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/21 01:19:01 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"

int main(int ac, char **av)
{
    Harl p;
    if(ac != 2)
    {
        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        return (1);
    }
    std::string s(av[1]);
    if(s != "ERROR" && s != "INFO" && s != "DEBUG" && s != "WARNING")
    {
        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        return (1);
    }
    p.complain(s);
    return(0);
}