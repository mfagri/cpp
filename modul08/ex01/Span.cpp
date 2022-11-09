/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:15:26 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/07 21:34:08 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    size = 0;
}
Span::Span(unsigned int n)
{
    size = n;
}

Span::~Span()
{
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &a)
{
    this->size = a.size;
    this->myvec = a.myvec;
    return (*this);
}

const char * Span::Aleardy::what() const throw()
{
    return "is full";
}

const char * Span::Nospan::what() const throw()
{
    return "no span can be found";
}

void  Span::addNumber(int number)
{
    if(myvec.size() == size)
        throw Aleardy();
    else
        myvec.push_back(number);
}

int Span::longestSpan()
{
    if(myvec.size() < 2)
        throw Nospan();
    int max;
    int min;
    
    max = *std::max_element(myvec.begin(),myvec.end());
    min = *std::min_element(myvec.begin(),myvec.end());

    return(max - min);       
}

int Span::shortestSpan()
{
    if(myvec.size() < 2)
        throw Nospan();
    
    std::vector<int> temp;
    temp = myvec; 
    std::sort(temp.begin(),temp.end());
    int min = temp[1] - temp[0];
    for(unsigned int i = 0;i < size - 1;i++)
    {
        if(temp[i + 1] - temp[i] < min)
            min = temp[i + 1] - temp[i];
    }
    return min;
}

void Span::Bigadd(unsigned int n)
{
    unsigned int j= myvec.size();
    for(unsigned int i = j; i < n ; i++)
        addNumber(rand()%n);
}

void Span::printspan()
{
    size_t i;
    i = 0;
    while(i < myvec.size())
    {
        std::cout<<myvec[i]<< " | ";
        i++;
    }
    std::cout<<"\n";
}