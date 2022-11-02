/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:36:12 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/02 23:32:26 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <bits/stdc++.h>

typedef struct data_t
{
    int a;
    char c;
}Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}
int main()
{
    Data r;
    r.a = 10;
    r.c = 'a';
    uintptr_t  h  = serialize(&r);
    std::cout<<sizeof(h)<<std::endl;
    Data *dd = new(Data);
    dd = deserialize(h);
    std::cout << dd->a << std::endl;
    std::cout << dd->c << std::endl;
    
    std::cout<<"***************************************\n";
}