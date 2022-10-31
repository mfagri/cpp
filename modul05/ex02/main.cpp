/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:42:49 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/30 21:05:41 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
   try
   {
    Bureaucrat a("bureacrt 1",150);
    PresidentialPardonForm b("form1");
    b.beSigned(a);
    ShrubberyCreationForm c("form2");
    c.beSigned(a);
    a.executeForm(b);
    c.action();
    b.action();
    RobotomyRequestForm d("zoro");
    d.action();
   }
   catch(std::exception &e)
   {
    std::cout<<e.what()<<std::endl;
   }
}