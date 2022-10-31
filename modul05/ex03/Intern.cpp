/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:31:58 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/30 17:57:41 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
    std::cout<<"Intern deconstractor called\n";
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

char const * Intern::NotForm::what() const throw()
{
    return "from name dosen't exit";
}

Form *Intern::Shru(std::string target)
{
    Form *f = new ShrubberyCreationForm(target);
    std::cout << "Intern creates " << f->getName() << std::endl;
    return(f);
}
Form *Intern::Robo(std::string target)
{
    Form *f = new RobotomyRequestForm(target);
    std::cout << "Intern creates " << f->getName() << std::endl;
    return(f);
}
Form *Intern::Pres(std::string target)
{
    Form *f = new PresidentialPardonForm(target);
    std::cout << "Intern creates " << f->getName() << std::endl;
    return(f);
}
Form *Intern::makeForm(std::string name,std::string target)
{
    int i = 0;
    Form *(Intern::*form[3])(std::string) = {&Intern::Shru,&Intern::Robo,&Intern::Pres};
    std::string names[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    while (i < 3)
    {
        if (name == names[i])
        {
            return((this->*form[i])(target));
        }
        i++;
    }
    throw Intern::NotForm();
}