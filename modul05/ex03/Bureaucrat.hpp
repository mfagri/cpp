/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:44:59 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/29 16:46:39 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include <ctime>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name,int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator = (Bureaucrat const &a);
        std::string getName() const;
        int getGrade() const;
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        } ;
        
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        } ;
        
        void incrementgrade();
        void decrementgrade();
        void signForm(Form const &form) const;
        void executeForm(Form const & form);
        
};

std::ostream &operator << (std::ostream& os, const Bureaucrat &b);
#endif