/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:15:59 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/09 14:28:41 by mfagri           ###   ########.fr       */
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
    std::cout << "Default constructor called\n";
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
    os << b.getName() << ", bureaucrat grade "<< b.getGrade();
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

void Bureaucrat::signForm(Form const &form) const
{
    if(form.getstatus())
        std::cout<< *this << " bureaucrat signed "<<form<<std::endl;
    else
        std::cout<< *this<< " bureaucrat couldn’t sign "<<form<< " because the grade is too low,.\n";
 
}