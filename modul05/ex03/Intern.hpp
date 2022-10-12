/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:31:54 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/11 17:03:27 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern
{
    private:
        Form *forms[3];
    public:
        Intern();
        virtual ~Intern();
        Intern &operator = (Intern const &a);
        Intern(const Intern &copy);
        Form *makeForm(std::string name,std::string target);
};

#endif