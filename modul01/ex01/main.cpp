/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:21:12 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/14 16:39:13 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
		Zombie *x = zombieHorde(5,"ma");
		for (int i = 0; i < 5;i++)
			x[i].announce();
		delete[] x;
		return (0);
}