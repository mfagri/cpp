/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:52:34 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/03 16:33:16 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain constructor called"<<std::endl;
}
Brain::~Brain(){
    std::cout<<"Brain destructor called"<<std::endl;
}
Brain::Brain(const Brain &copy){
    std::cout<<"Brain copy constructor called"<<std::endl;
    *this = copy; 
}
Brain &Brain::operator = (Brain const &a)
{
    std::cout<<"Brain copy assignment operator called"<<std::endl;
    int i;
    i = 0;
    while (i < 100)
    {
       ides[i] = a.ides[i];
       i++;
    }
    return (*this);
}