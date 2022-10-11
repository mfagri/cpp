/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:32:41 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/11 10:33:33 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm",145,137)
{
   this->target = "";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_): Form("ShrubberyCreationForm",145,137)
{
    target = target_;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form("ShrubberyCreationForm",145,137){
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &b)
{
    target = b.target;
    return (*this);
}

void ShrubberyCreationForm::action(void) const
{
    std::string tree = "";
    std::ofstream w(((target).c_str()));
    
}