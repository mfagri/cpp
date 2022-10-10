/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:55:05 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/10 17:22:28 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("",72,45)
{
    target = "";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target_)
{
    target = target_;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
    this->target = a.target;
    return (*this);   
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    *this = copy;
}

void RobotomyRequestForm::robotomized(void)
{
    if(Form::getGrades() != 72 && Form::getGradex() != 45)
        std::cout<<target<< "has been robotomized successfully 50%"<<" of the time.\n";
    else
        std::cout<<"Robotomy failed\n";     
}