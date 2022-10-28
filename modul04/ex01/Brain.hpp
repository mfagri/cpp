/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:32:57 by mfagri            #+#    #+#             */
/*   Updated: 2022/10/27 13:42:37 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string * arr;
    public:
        Brain();
        ~Brain();
        Brain(const Brain &copy);
        Brain &operator = (Brain const &a);
        void display();
};
#endif