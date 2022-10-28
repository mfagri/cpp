# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 05:37:11 by mfagri            #+#    #+#              #
#    Updated: 2022/10/13 21:43:41 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC	= main.cpp harl.cpp

CPC = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp harl.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<

$(NAME): $(OBJ)
	$(CPC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all