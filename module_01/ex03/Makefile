# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmamison <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 17:56:39 by rmamison          #+#    #+#              #
#    Updated: 2023/03/03 20:40:01 by rmamison         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HUMAN

SRC = $(wildcard ./*.cpp)

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $^ -o $@
	make clean
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
