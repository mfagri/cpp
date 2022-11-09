/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:19:56 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/08 21:17:21 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
std::cout<<"top is "<<mstack.top()<<std::endl;
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
std::cout<<"lock "<<*it<<std::endl;
--it;
std::cout<<"lock "<<*it<<std::endl;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
MutantStack<int> ar;
ar.push(5);
ar.push(17);
ar.push(3);
ar.push(15);
ar.push(737);
ar.push(0);
MutantStack<int>::iterator ptr = ar.begin();
advance(ptr, 3);
std::cout<<"is "<<*ptr<<std::endl;
return(0);
}