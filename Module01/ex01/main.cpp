/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:21:12 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 14:35:25 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
		
		// Zombie *newz;

		// newz = newZombie("Z1");
		// newz->announce();
		// delete newz;
		// std::cout << "*****************" << std::endl;
		// randomChump("Z2");
		// Zombie *n = zombieHorde(3,"mm");
		// int i = 0;
		// while (i< 3)
		// {
		//     n[i].announce();
		//     i++;
		// }
		// delete []n;
		// return (0);
		Zombie *x = zombieHorde(5,"ma");
		for (int i = 0; i < 5;i++)
			x[i].announce();
		delete[] x;
		return (0);

}