/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:15:59 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/29 14:30:30 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName() const 
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):name(copy.name)
{
    this->grade = copy.grade;
}

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name_,int grade):name(name_)
{
   if(grade < 1)
    throw(Bureaucrat::GradeTooHighException());
   if(grade > 150)
    throw(Bureaucrat::GradeTooLowException());
   this->grade = grade;
    
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat deconstractor called\n";
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &a)
{
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;
    grade = a.grade;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &b)
{
    os << b.getName() << ", bureaucrat grade "<< b.getGrade() <<std::endl;
    return os;
}

void Bureaucrat::incrementgrade()
{
    if(grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        grade -= 1;
}

void Bureaucrat::decrementgrade()
{
    if(grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        grade += 1;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "My GradeTooHighException happened";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "My GradeTooLowException happened";
}