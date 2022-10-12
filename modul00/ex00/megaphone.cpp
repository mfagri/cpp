/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:58:56 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/11 21:00:45 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac ,char **av)
{
    int i;
    int j;

    j = 1;
    if(ac > 1)
    {
        while(av[j])
        {
            i = -1;
            while(av[j][++i])
                av[j][i] = toupper(av[j][i]);
            std::cout<<av[j];
            j++;
        }
        std::cout<<std::endl;
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return (0);
}