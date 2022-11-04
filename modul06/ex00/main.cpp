/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:15:47 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/03 16:59:44 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>
#include <iomanip> 


int ft_detectype(std::string s)
{
    int i;
    int j;
    int k;
    int f;
    i = 0;
    while(s[i])
    {
        if(s[0] == '-' || s[0] == '+')
        {
            k = 1;
            i++;
        }
        if(isalpha(s[i]))
        {
            if(s.length() > 1 )
            {
                std::cout<<"error string!\n";
                break;
            }
            if(s.length() == 1)
            {
                //std::cout<<"char :";
                return (1);
            }
        }
        else if(isdigit(s[i]))
        {
            j = 0;
            if(k)
               j++;
            while (s[j])
            {
                if(isdigit(s[j]) == 0)
                    break;
                j++;
            }
            if(j == (int)s.length())
            {
               // std::cout<<"int :";
                return(2);
            }
        }
        if(isdigit(s[i]))
        {
            f = 0;
            f++;
            while(s[f])
            {
                if(s[f] == '.')
                {
                    f++;
                    while(isdigit(s[f]))
                        f++;
                    if(s[f] == 'f')
                    {
                       // std::cout<<"float :";
                       if(s[f] == 'f' && s[f+1])
                        return 5;
                       return(3);
                    }
                    else
                    {
                        //std::cout<<"double :";
                        return(4);
                    }
                }
                if(s[f] == 'f' )
                {
                        //std::cout<<"float :";
                        if(s[f] == 'f' && s[f+1])
                            return 5;
                        return(3);
                }
                
                f++;
            }
        }       
        i++;
    }
    return (5);
}
int main(int ac,char **av)
{
    if(ac != 2)
    {
        std::cout<<"more than 2 arguments\n";
        return (1);
    }
    int type;
    int Int;
    float Float;
    double Double;
    std::string s = av[1];
    if(s == "-inff")
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: -inff\n";
        std::cout<<"double: -inf\n";
        return(0);
    }
    else if(s == "+inff" || s == "inff")
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: inff\n";
        std::cout<<"double: inf\n";
        return(0);
    }
    else if(s == "nanf")
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: nanf\n";
        std::cout<<"double: nan\n";
        return(0);
    }
    else if(s == "-inf")
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: -inff\n";
        std::cout<<"double: -inf\n";
        return(0);
    }
    else if(s == "+inf" || s == "inf")
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: inff\n";
        std::cout<<"double: inf\n";
        return(0);
    }
    else if(s == "nan")
    {
        std::cout<<"char: impossible\n";
        std::cout<<"int: impossible\n";
        std::cout<<"float: nanf\n";
        std::cout<<"double: nan\n";
        return(0);
    }
    else
    {
        type = ft_detectype(s);
        switch (type)
        {
        case 1:
            std::cout<<"char :"<<"\'"<<static_cast<char>(s[0])<<"\'"<<std::endl;
            std::cout<<"int :"<<static_cast<int>(s[0])<<std::endl;
            std::cout << std::fixed;
            std::cout<<"float :"<< std::setprecision(1) <<static_cast<float>(s[0])<<"f"<<std::endl;
            std::cout<<"double :"<<std::setprecision(1)<<static_cast<double>(s[0])<<std::endl;
            break;
        case 2:
            Int = stoi(s);
            if(Int >= 32 && Int <= 127)
                std::cout<<"char :"<<"\'"<<static_cast<char>(Int)<<"\'"<<std::endl;
            else
                std::cout<<"char: Non displayable\n";
            std::cout<<"int :"<<static_cast<int>(Int)<<std::endl;
            std::cout << std::fixed;
            std::cout<<"float :"<< std::setprecision(1) <<static_cast<float>(Int)<<"f"<<std::endl;
            std::cout<<"double :"<<std::setprecision(1)<<static_cast<double>(Int)<<std::endl;
            break;
        case 3:
            Float = std::stof(s);
            if(Float >= 32 && Float <= 127)
                std::cout<<"char :"<<"\'"<<static_cast<char>(Float)<<"\'"<<std::endl;
            else
                std::cout<<"char: Non displayable\n";
            std::cout<<"int :"<<static_cast<int>(Float)<<std::endl;
            std::cout << std::fixed;
            std::cout<<"float :"<< std::setprecision(1) <<static_cast<float>(Float)<<"f"<<std::endl;
            std::cout<<"double :"<<std::setprecision(1)<<static_cast<double>(Float)<<std::endl;
            break;
        case 4:
            Double = std::stod(s);
            if(Double >= 32 && Double <= 127)
                std::cout<<"char :"<<"\'"<<static_cast<char>(Double)<<"\'"<<std::endl;
            else
                std::cout<<"char: Non displayable\n";
            std::cout<<"int :"<<static_cast<int>(Double)<<std::endl;
            std::cout << std::fixed;
            std::cout<<"float :"<< std::setprecision(1) <<static_cast<float>(Double)<<"f"<<std::endl;
            std::cout<<"double :"<<std::setprecision(1)<<static_cast<double>(Double)<<std::endl;
            break;
        case 5:
            std::cout<<"error in argument\n";
            break;
        }
    }
    return (0);
}