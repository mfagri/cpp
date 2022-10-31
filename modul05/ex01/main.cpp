/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:49 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/30 21:52:12 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("mmm",-1);
        std::cout<<"b is created\n";
        Form test("test",100, 100);
        test.beSigned(b);
        b.signForm(test);
        std::cout<<"good\n";
    }
    catch(std::exception& e){
        std::cout<<e.what()<< std::endl;
    }
    try{
        Bureaucrat c("ffff",2);
        c.incrementgrade();
        std::cout<<"increment\n";
    }
    catch(std::exception& e){
        std::cout<<e.what()<< std::endl;
    }
}