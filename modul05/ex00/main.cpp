/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:49 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/29 17:46:45 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("mmm",-1);
        std::cout<<"mmmmmm\n";
    }
    catch(std::exception& e){
        std::cout<<e.what()<< std::endl;
    }
    std::cout<<"************************************************************\n";
    try{
        Bureaucrat c("ffff",2);
        c.incrementgrade();
        std::cout<<"increment\n";
    }
    catch(std::exception& e){
        std::cout<<e.what()<< std::endl;
    }
    Bureaucrat j("ded",10);
    std::cout<<j;
    
}