/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:15:23 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/07 21:30:55 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <array>

class Span
{
private:
    std::vector<int> myvec;
    unsigned int size;
public:
    Span();
    Span(unsigned int n);
    Span(Span const &copy);
    Span & operator = (Span const &a);
    ~Span();
    void addNumber(int number);
    class Aleardy:public std::exception
    {
        const char *what() const throw();
    };
    class Nospan:public std::exception
    {
        const char *what() const throw();
    };
    int shortestSpan();
    int longestSpan();
    void Bigadd(unsigned int n);
    void printspan();
};



#endif