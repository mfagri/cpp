/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:55:05 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/10 17:01:32 by mfagri           ###   ########.fr       */
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