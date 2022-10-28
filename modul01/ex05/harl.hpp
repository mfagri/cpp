/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:57:26 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 22:00:56 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>
#include <string>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
};

#endif