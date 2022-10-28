/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:40:04 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/26 23:16:01 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace(std::ofstream *w,std::string h,std::string s1,std::string s2)
{
    size_t index;
    size_t j = s1.length();
    
    index = 0;
    while (index < h.length())
    {
        
        if(h.compare(index,j,s1) == 0)
        {
            h.erase(index,j);
            h.insert(index,s2);
        }
        index += s1.length();
    }
    *w<<h;
}
int main(int ac,char **av)
{
    std::string h;
    if(ac != 4)
    {
        std::cout<<"invailable argument"<<std::endl;
        return (1);
    }
    else
    {
        if(av[2][0] == '\0')
        {
            std::cout<<"argument is null\n";
            return (1);
        }
        std::ifstream r_file(av[1]);
        if(!r_file.is_open())
        {
            std::cout<<"availble file\n";
            return (1);   
        }
        else
        {
            while(!r_file.eof())
            {
                std::string text;
                getline(r_file,text);                
                h+=text+"\n";               
            }
        }
        std::ofstream w(((std::string)av[1] + ".replace").c_str());
        if(!w.is_open())
        {
            std::cout<<"availble file\n";
            return (1);   
        }
        replace(&w,h,av[2],av[3]);
        r_file.close();
        w.close();
    }
    return(0);
}