# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 00:44:54 by mfagri            #+#    #+#              #
#    Updated: 2022/10/13 18:21:53 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

SRC	= main.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp 
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<
	
$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all