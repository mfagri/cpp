/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:29:01 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/05 00:03:28 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array()
        {
            arr = NULL;
            n = 0;
        }
        Array(unsigned int n)
        {
            this->n = n;
            arr = new T[n];
        }
        Array(const Array &copy)
        {
            arr = copy.arr;
            // arr = new T[n];
            // unsigned int i;
            // i = 0;
            // while(i < n)
            // {
            //     arr[i] = copy.arr[i];
            //     i++;
            // }
        }
        Array &operator =(const Array &a)
        {
            arr = a.arr;
            // arr = new T(n);
            // unsigned int i;
            // i = 0;
            // while(i < n)
            // {
            //     arr[i] = a.arr[i];
            //     i++;
            // }
            return (*this);
        }
        T &operator [] (unsigned int n)
        {
            if(n > this->n )
                Outofbounds();
            return arr[n];
        }

        const T &operator [] (unsigned int n) const
        {
            if(n > this->n)
                Outofbounds();
            return arr[n];
        }
        class Outofbounds : public std::exception
        {
             const char* what() const throw()
             {
                return "index out of bounds";
             }
        };
        ~Array()
        {}
        
        
};






#endif
