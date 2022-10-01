/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:56:52 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/12 20:57:12 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    Phonebook g;
    int count;
    int countact;
    countact = 0;
    count = 0;
    std::string s;
    std::cout<<"your : choice | ADD | SEARCH | EXIT :";
    while(1)
    {
        if(!std::getline(std::cin,s))
            break;
        if(s == "ADD")
        {
            if(countact < 8)
                countact++;
            if(count == 8)
                count = 0;
            if(g.set_contact_info(count))
                break;
            count++;
        }
        else if (s == "SEARCH")
        {
            if(count == 0)
            {
                std::cout<<"is empty\n";
                std::cout<<"your : choice | ADD | SEARCH | EXIT :"; 
            }
            else
                g.get_contact_info(countact);
        }
        else if (s == "EXIT")
        {
            break;
        }
        else
            std::cout<<"your : choice | ADD | SEARCH | EXIT :"; 
    }
    return (0);
}