/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:56:18 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/03 17:10:38 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int random;
    random = time(NULL);
    if(random%2 == 0)
    {
        A *n = new(A);
        return(n);
    }
    else if(random%3 == 0)
    {
        B *n = new(B);
        return(n);
    }
    C *n = new(C);
    return(n);
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p) != NULL)
        std::cout<<"type is A\n";
    else if(dynamic_cast<B*>(p) != NULL)
        std::cout<<"type is B\n";
    else if(dynamic_cast<C*>(p) != NULL)
        std::cout<<"type is C\n";
}

void identify(Base& p)
{
    A a;
    B b;
    C c;
    try{
        a = dynamic_cast<A&>(p);
        std::cout<<"type is A\n";
    }
    catch(std::bad_cast)
    {
    }
    try{
        b = dynamic_cast<B&>(p);
        std::cout<<"type is B\n";
    }
    catch(std::bad_cast)
    {
    }
    try{
        c = dynamic_cast<C&>(p);
        std::cout<<"type is C\n";
    }
    catch(std::bad_cast)
    {
    }
}
int main()
{
   
    Base *base = generate();
    identify(base);
    std::cout<<"*****************************************\n";
    identify(base);
    return(0);
}