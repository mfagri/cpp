/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:00:17 by mfagri            #+#    #+#             */
/*   Updated: 2022/08/28 20:41:42 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

class Contact{
    //public:
     int index;
     std::string first_name;
     std::string last_name;
     std::string nickname;
     std::string phonenumber;
     public:
        int get_index()
        {
            return (index);
        }
        std::string get_fistname()
        {
            return (first_name);
        }
        std::string get_lastname()
        {
            return (last_name);
        }
        std::string get_nickname()
        {
            return (nickname);
        }
        std::string get_phonenumber()
        {
            return (phonenumber);
        }
};
class PhoneBook{
    private:
        Contact b[8];
    public:
        int get_contact(int i)
        {
            return b[i].get_index();
        }
};
int main()
{
    PhoneBook g;
    std::cout<<g.get_contact(1);
    return (0);
}