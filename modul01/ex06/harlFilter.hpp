/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:57:26 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/21 00:32:04 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_CPP
#define HARLFILTER_CPP

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
        void    complain( std::string level );
};

#endif