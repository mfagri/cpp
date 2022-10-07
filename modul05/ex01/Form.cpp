/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:34:16 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/07 22:31:11 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
}
Form::~Form(){   
}

Form::Form(std::string name_,int grades,int gradee,bool indec_):name(name_),indec(indec_),gradeexcute(gradee),gradesigned(grades)
{}

Form::Form
