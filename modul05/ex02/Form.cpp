/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:34:16 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/09 14:25:41 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():gradesigned(0),gradeexcute(0)
{
    indec = false;
}
Form::~Form(){   
}

Form::Form(std::string name_,int grades,int gradee):name(name_),gradesigned(grades),gradeexcute(gradee) {
    if(gradee < 1)
        Form::GradeTooHighException();
    if(gradee > 150)
        Form::GradeTooLowException();
    if(grades < 1)
        Form::GradeTooHighException();
    if(grades > 150)
        Form::GradeTooLowException();
}

Form::Form(const Form &copy):gradesigned(0),gradeexcute(0)
{
    *this = copy;
}

Form &Form::operator=(Form const &b)
{
    this->indec = b.indec;
    return *this;
}

std::string Form::getName() const 
{
    return (name);
}

int Form::getGradex() const
{
    return(gradeexcute);
}
int Form::getGrades() const
{
    return(gradesigned);
}

std::ostream &operator<< (std::ostream &out,const Form  &a)
{
    out << a.getName() << ", Form gradeexcute "<< a.getGradex()<< ", Form gradesigned "<< a.getGrades();
    return out;
}

void Form::beSigned(Bureaucrat &a)
{
    if(a.getGrade() <= this->gradesigned)
        indec = true;
    else
        Form::GradeTooLowException();
}

bool Form::getstatus() const
{
    return (indec);
}