/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 04:29:11 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/16 04:53:31 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <stdlib.h>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout<<"The memory address of the string variable: "<<&s<<std::endl;
    std::cout<<"The memory address held by stringPTR: "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF: "<<&stringREF<<std::endl;

    std::cout<<"The value of the string variable: "<<s<<std::endl;
    std::cout<<"The value pointed to by stringPTR: "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF: "<<stringREF<<std::endl;
}