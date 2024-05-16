# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: subpark <subpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 16:36:52 by subpark           #+#    #+#              #
#    Updated: 2024/05/16 16:03:17 by subpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Bureaucrat.cpp Form.cpp main.cpp
HDRS = Bureaucrat.hpp Form.hpp
OBJ = $(SRC:.cpp=.o)
#CC = g++
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror

NAME = a.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp $(HDRS)
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re