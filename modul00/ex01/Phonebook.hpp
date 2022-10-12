/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:31:32 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/11 19:11:51 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Countact{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darcksecrit;
    public:
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_num();
        void set_information(int i,std::string s);
        void set_darks(std::string s);
        void set_firstname(std::string s);
        void set_lastname(std::string s);
        void set_nickname(std::string s);
        void set_phounnumber(std::string s);
};

class Phonebook{
    Countact b[8];
    public:
        void get_contact_info(int i);
        int set_contact_info(int i);
};

std::string	ft_short(std::string s);
#endif