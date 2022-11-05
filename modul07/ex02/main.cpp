/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:39:09 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/05 18:53:19 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> integerr(5);
    std::cout<<"size of intergerr is "<<integerr.size()<<std::endl;
        for(unsigned int i = 0;i < integerr.size();i++)
            integerr[i] = i+1;
    Array<int> copyint(integerr);
    std::cout<<"************************************"<<std::endl;
        for(unsigned int i = 0;i < copyint.size();i++)
            std::cout<<copyint[i]<<std::endl;
    std::cout<<"************************************"<<std::endl;
    try{
        copyint[-1] = 7;
    }catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    std::cout<<"************************************"<<std::endl;
    std::cout<<"************* strings **************"<<std::endl;
    std::cout<<"************************************"<<std::endl;
    {
        std::string s[5] = {"mfagri","marouane","fagri","maron6","zoro"};
        Array<std::string> integerr(5);
    std::cout<<"size of intergerr is "<<integerr.size()<<std::endl;
        for(unsigned int i = 0;i < integerr.size();i++)
            integerr[i] = s[i];
    Array<std::string> copyint(integerr);
    std::cout<<"************************************"<<std::endl;
        for(unsigned int i = 0;i < copyint.size();i++)
            std::cout<<copyint[i]<<std::endl;
    std::cout<<"************************************"<<std::endl;
        try{
            copyint[4] = "one piece";
            std::cout<<copyint[4]<<std::endl;
        }catch(std::exception &e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    return 0;
}