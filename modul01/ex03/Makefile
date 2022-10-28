# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 02:59:51 by mfagri            #+#    #+#              #
#    Updated: 2022/10/13 21:41:59 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HUMAN

SRC	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<
	
$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all