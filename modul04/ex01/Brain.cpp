/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:52:34 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/27 17:23:15 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain constructor called"<<std::endl;
    arr = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = "brain";
    }
    
}
Brain::~Brain(){
    std::cout<<"Brain destructor called"<<std::endl;
    delete[] arr;
}
Brain::Brain(const Brain &copy){
    std::cout<<"Brain copy constructor called"<<std::endl;
    // *this = copy; 
    
    arr = new std::string[100];
    for(int i = 0; i < 100;i++)
        arr[i] = copy.arr[i];
}
Brain &Brain::operator = (Brain const &a)
{
    std::cout<<"Brain copy assignment operator called"<<std::endl;
    if(this != &a)
    {
        // arr = new std::string[100];
        for(int i = 0; i < 100;i++)
            arr[i] = a.arr[i];
    }
    return (*this);
}

void Brain::display()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
}