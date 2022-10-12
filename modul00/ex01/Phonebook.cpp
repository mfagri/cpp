/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:24:52 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/12 14:52:12 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string	ft_short(std::string s)
{
    int i;
    i = 0;
    while (s[i])
    {
        if(s[i] == '\t')
            s[i] = ' ';
        i++;
    }
    i = 0;
	if (s.size() > 10)
	{
        while (s[i])
        {
            i++;
            if(i == 9)
            {
                s[i]='.';
                i++;
                while (s[i])
                {
                    s[i] ='\0';
                    i++;
                }
                break;
            }
        } 
	}
	return (s);
}
std::string Countact:: get_firstname()
{
    return (firstname);
}
std::string Countact:: get_lastname()
{
    return (lastname);
}
std::string Countact:: get_nickname()
{
    return (nickname);
}
std::string Countact:: get_num()
{
    return (phonenumber);
}
void Countact:: set_information(int i,std::string s)
{
    if(!isalnum(s[0]))
        s = "notvalide";
    if(i == 0)
        firstname = s;
    if(i == 1)
        lastname = s;
    if(i == 2)
        nickname = s;
    if(i == 3)
        phonenumber = s;
    if(i == 4)
        darcksecrit = s;
}
void Countact::set_darks(std::string s)
{
    darcksecrit = s;
}
void Countact::set_firstname(std::string s)
{
    firstname = s;
}
void Countact::set_lastname(std::string s)
{
    lastname = s;   
}
void Countact::set_nickname(std::string s)
{
    nickname = s;
}
void Countact::set_phounnumber(std::string s)
{
    phonenumber = s;
}
void Phonebook::get_contact_info(int i)
{
    int j = 0;
    std::string k;
    std::cout<<"____________________________________________\n";
    while (j < i)
    {
        std::cout << std::setw(10);
        std::cout << j+1;
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout<<ft_short(b[j].get_firstname());
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout<<ft_short(b[j].get_lastname());
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout<<ft_short(b[j].get_nickname());
        std::cout << '|'<<std::endl;
        j++;
    }
    std::cout<<"____________________________________________\n";
    std::cout<<"choise Countact :";
    std::getline(std::cin,k);
    if (std::cin.eof()==1)
        return ;
    if(k[0] == '\0' || k.length() > 1 || !isdigit(k[0]))
    {
        std::cout<<"choice integer number please\n";
        get_contact_info(j);
        return;
    }
    int l;
    l = k[0] - '0';
    if(l > j || l <= 0)
    {
        std::cout<<"is no countact of this index try again \n";
        get_contact_info(j);
        return;
    }
    std::cout<<"first name :"<<b[l-1].get_firstname()<<std::endl;
    std::cout<< "last name :"<<b[l-1].get_lastname()<<std::endl;
    std::cout<<"nickname :"<<b[l-1].get_nickname()<<std::endl;
    std::cout<<"phounenumber :"<<b[l-1].get_num()<<std::endl;
    std::cout<<"your  choice :| ADD | SEARCH | EXIT :"; 
    return;
}
int Phonebook::set_contact_info(int i)
{
    int k;
    std::string s;
    std::string lis[5]={"firstname","lastname","nickname","phonebook","darksecrit"};
    int j;
    j = 0;
    while(j < 5)
    {
        k = 0;
        std::cout<<lis[j]<<" :";
        std::getline(std::cin,s);
        if (std::cin.eof()==1)
            return 0;
            
        if(s.empty())
        {
            while (s.empty())
            {
                std::cout << "can't have empty fields" << std::endl;
                std::cout<<lis[j]<<" :";
                std::getline(std::cin,s);
                if (std::cin.eof()==1)
                    return (1);
            }

        }
        b[i].set_information(j,s);
        j++;   
    }
    std::cout<<"your  choice :| ADD | SEARCH | EXIT :";
    return (0);
}
