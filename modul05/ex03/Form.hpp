/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:34:20 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/29 21:17:45 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;
class Form{
    private:
        const std::string name;
        bool indec;
        const int gradesigned;
        const int gradeexcute;
    public:
        Form();
        virtual ~Form();
        Form(std::string name_,int grades,int gradee);
        Form(const Form &copy);
        Form &operator = (Form const &b);
        std::string getName() const;
        int getGradex() const;
        int getGrades() const;
        bool getstatus() const ;
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        } ;
        
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        } ; 
        class NotSigned:public std::exception
        {
            const char *what() const throw();
        };
        void beSigned(Bureaucrat &a);
        void execute(Bureaucrat const & executor) const;
        void virtual action(void) const = 0;
};
std::ostream &operator<< (std::ostream &out,const Form  &a);

#endif