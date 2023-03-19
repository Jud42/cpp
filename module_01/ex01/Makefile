# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmamison <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 17:57:52 by rmamison          #+#    #+#              #
#    Updated: 2023/03/03 17:57:55 by rmamison         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz

SRC = $(wildcard ./*.cpp)

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $^ -o $@
	$(RM) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
