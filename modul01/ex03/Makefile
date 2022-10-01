# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 02:59:51 by mfagri            #+#    #+#              #
#    Updated: 2022/09/16 05:21:31 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HUMAN

SRC	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CPC = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) HumanA.hpp HumanB.hpp Weapon.hpp
	$(CPC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all