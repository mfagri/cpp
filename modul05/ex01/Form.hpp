/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:34:20 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/07 22:30:53 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form{
    private:
        const std::string name;
        bool indec;
        const int gradesigned;
        const int gradeexcute;
    public:
        Form();
        ~Form();
         Form(std::string name_,int grades,int gradee,bool indec_);
         Form(const Form &copy);
         class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "My GradeTooHighException happened";
            }
        } ;
        
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "My GradeTooLowException happened";
            }
        } ;    
};

#endif