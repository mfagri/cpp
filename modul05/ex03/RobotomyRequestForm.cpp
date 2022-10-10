/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:55:05 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/10 20:06:06 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45)
{
    target = "";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target_):Form("RobotomyRequestForm",72,45)
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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):Form("RobotomyRequestForm",72,45)
{
    *this = copy;
}

void RobotomyRequestForm::action(void)
{
    int t ;
    t = time(NULL);
    if(t%2)
        std::cout<<target<< "has been robotomized successfully 50%"<<" of the time.\n";
    else
        std::cout<<"Robotomy failed\n";     
}