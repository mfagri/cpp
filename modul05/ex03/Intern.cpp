/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:31:58 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/11 12:51:11 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
    int i = 0;
    while(i< 3)
    {
        delete forms[i];
        i++;
    }
}

Intern &Intern::operator=(Intern const &a)
{
    (void)a;
    return(*this);
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}


Form *Intern::makeForm(std::string name,std::string target)
{
    
    forms[0] = new ShrubberyCreationForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new PresidentialPardonForm(target);
    int i = 0;
    std::string names[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    while (i < 3)
    {
        if (name == forms[i]->getName())
        {
            std::cout<<"Intern creates "<<*forms[i]<<std::endl;
            return(forms[i]);
        }
        i++;
    }
    std::cout<<"form name dosen't exit"<<std::endl;
    return (NULL);
}
