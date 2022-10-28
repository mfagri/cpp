/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:49 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/16 22:33:53 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try{  
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat bur("name", 10);
        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        rrf->beSigned(bur);
        rrf->action();
    }
    catch(const char *str) {
        std::cout << str;
    }
}