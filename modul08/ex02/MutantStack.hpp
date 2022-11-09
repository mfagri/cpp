/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:20:10 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/09 12:06:22 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <class T, class container_type = std::deque<T> >
class MutantStack:public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack()
        {}
        ~MutantStack()
        {
            this->c.clear();
        }
        MutantStack(MutantStack const &copy)
        {
            *this = copy;
        }
        MutantStack &operator =(MutantStack const &a)
        { 
            this->c = a.c;
            return (*this);
        }
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};
#endif