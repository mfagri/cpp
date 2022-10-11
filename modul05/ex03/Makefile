# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 21:44:25 by mfagri            #+#    #+#              #
#    Updated: 2022/10/11 12:37:36 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

SRC	= main.cpp\
	Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp\
	 RobotomyRequestForm.cpp \
	 PresidentialPardonForm.cpp\
	 Intern.cpp

CPC = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	$(CPC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all