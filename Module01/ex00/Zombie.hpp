/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:07:04 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/13 18:15:47 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
 
# include <iostream>

class Zombie {
  private:
    std::string name;
  public:
    Zombie();
    ~Zombie();
    std::string getName();
    void setname(std::string name);
    void announce ();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif 