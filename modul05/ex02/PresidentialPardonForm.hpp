/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:03:41 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/10 17:11:11 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm:public Form{
    private:
        std::string target;
    public:
       PresidentialPardonForm();
       ~PresidentialPardonForm();
       PresidentialPardonForm(std::string target_);
       PresidentialPardonForm &operator=(PresidentialPardonForm const &b);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        void inform(void);
};
#endif