# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 14:59:06 by mfagri            #+#    #+#              #
#    Updated: 2022/10/12 15:00:10 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC	=  megaphone.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<
	
$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(DFLAGS) $(OBJ) -o $@ 


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
