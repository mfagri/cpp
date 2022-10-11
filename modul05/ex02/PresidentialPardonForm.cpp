/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:06:48 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/11 10:34:29 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5)
{
    target = "";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target_):Form("PresidentialPardonForm",25,5)
{
    target = target_;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
    this->target = a.target;
    return (*this);   
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):Form("PresidentialPardonForm",25,5)
{
    *this = copy;
}

void PresidentialPardonForm::action(void) const
{
    std::cout<<this->target<<"has been pardoned by Zaphod Beeblebrox\n";
}