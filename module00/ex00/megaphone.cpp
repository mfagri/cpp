

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:56:41 by mfagri            #+#    #+#             */
/*   Updated: 2022/08/22 20:36:25 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac,char **av)
{
    int i;
    
    int j;
    
    if(ac > 1)
    {
        i = 1;
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if (islower(av[i][j]))
                    av[i][j] = toupper(av[i][j]);
                j++;
            }
            std::cout <<av[i];
            i++;
        }
        std::cout <<"\n";
        return (0);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
