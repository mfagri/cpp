/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:31:54 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/30 16:15:49 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern
{
    public:
        // Form *forms[3];
        Intern();
        ~Intern();
        Form *Pres(std::string target);
        Form *Robo(std::string target);
        Form *Shru(std::string target);
        Intern &operator = (Intern const &a);
        Intern(const Intern &copy);
        Form *makeForm(std::string name,std::string target);
        class NotForm:public std::exception
        {
            const char *what() const throw();
        };
};

#endif