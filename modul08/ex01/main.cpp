/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:13:38 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/09 11:43:01 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    srand(time(NULL));
    Span sp = Span(10000);
    for (size_t i = 0; i < 9999; i++)
    {
        sp.addNumber(rand());
    }
    try{  
        sp.addNumber(10020);
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    /////////////////////////////////////////////////////
    try{  
        sp.addNumber(8);
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    ////////////////////////////////////////////////////
    {
        Span sp = Span();
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(std::exception &e)
        {
        std::cout<<e.what()<<std::endl;
        }
        
    }
    {
        Span sp = Span(1000);
        try
        {
            sp.Bigadd(100);
        }
        catch(std::exception &e)
        {
        std::cout<<e.what()<<std::endl;
        }
        try
        {
            sp.Bigadd(900);
            sp.printspan();
        }
        catch(std::exception &e)
        {
        std::cout<<e.what()<<std::endl;
        }
    }
    return 0;
}