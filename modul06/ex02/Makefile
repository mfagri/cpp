# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 17:35:41 by mfagri            #+#    #+#              #
#    Updated: 2022/11/03 17:11:04 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Identifytype

SRC	= main.cpp Base.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all