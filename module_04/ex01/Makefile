#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmamison <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 17:22:52 by rmamison          #+#    #+#              #
#    Updated: 2023/03/17 19:27:11 by rmamison         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Prog

SRC = $(wildcard ./*.cpp)

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	$(CC) $^ -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
run : $(NAME)
	./$<
.PHONY: all clean fclean re
