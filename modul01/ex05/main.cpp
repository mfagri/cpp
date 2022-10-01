/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 04:40:33 by mfagri            #+#    #+#             */
/*   Updated: 2022/09/21 05:36:34 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main()
{
    Harl p;
        std::cout << "******************* debug ****************************\n";
    p.complain("DEBUG");
        std::cout << std::endl;

        std::cout << "******************* info ****************************\n";
    p.complain("INFO");
        std::cout << std::endl;

        std::cout << "******************* warning ****************************\n";
    p.complain("WARNING");
        std::cout << std::endl;

        std::cout << "******************* error ****************************\n";
    p.complain("ERROR");
        std::cout << std::endl;

    return(1);
}