/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:32:41 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/10 16:51:39 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ss",145,137)
{
   this->target = "";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_)
{
    target = target_;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &b)
{
    target = b.target;
    return (*this);
}

void ShrubberyCreationForm::Drawtrees(void)
{
    std::string tree = "";
    std::ofstream w(((target).c_str()));
    
}