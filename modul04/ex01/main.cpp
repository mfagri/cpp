/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:52:48 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/28 17:11:07 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void func()
{
    system("leaks Animal");
}

int main()
{
    //atexit(func);

    Brain a;
    Brain b;

    b = a;
    b.display();
    //a.display();
     
Dog d;
// d.makeSound();
const Animal *an[10];
for(int i = 0;i< 10;i++)
{
    if(i < 5)
        an[i] = new Dog();
    else
        an[i] = new Cat();
}

for(int j = 0;j< 10;j++)
    delete an[j];

Dog *aa = new Dog();
Dog *ba = new Dog(*aa);

delete ba;
delete aa;
return 0;
}