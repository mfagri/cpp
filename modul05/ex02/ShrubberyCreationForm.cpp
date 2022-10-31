/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:32:41 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/30 18:59:39 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm",145,137)
{
   this->target = "home";
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
    std::ofstream w(((target+"_shrubbery").c_str()));
    if(!w.is_open())
        std::cout<<"cannot open file\n";
    else
        w<<      "          {{*}{\n"
				 "          {{}}}{{\n"
				 "        {{}}{}}\n"
				 "           }}}}{\n"
				 "          {{}}}\n"
				 "         }{{}{}}\n"
				 "           {{}{}}\n"
				 "         }}{{}}\n"
				 "          {{}}{{\n"
				 "           \\  /\n"
				 "        .-''| |``-.\n"
				 "       '-._/_o_\\_.-'\n"
				 "        `._MFAGRI_.'\n"
				 "         | :    : |\n"
				 "         `._    .'\n"
				 "            `--'";
	w.close();
    
}