# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 19:35:57 by mfagri            #+#    #+#              #
#    Updated: 2022/10/23 19:06:43 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRC	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<

$(NAME): $(OBJ) 
	$(CXX) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all