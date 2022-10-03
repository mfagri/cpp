/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:52:48 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/03 21:00:16 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "AnimalA.hpp"

int main()
{
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// delete meta;
// delete j;
// delete i;
const AnimalA *an[10];

for(int i = 0;i< 10;i++)
{
    if(i < 5)
        an[i] = new Dog();
    else
        an[i] = new Cat();
}

for(int j = 0;j< 10;j++)
    delete an[j];

return 0;
}