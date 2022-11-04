# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:12:18 by mfagri            #+#    #+#              #
#    Updated: 2022/11/04 21:50:19 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

SRC	= main.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Array.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all