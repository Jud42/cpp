#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmamison <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 17:22:52 by rmamison          #+#    #+#              #
#    Updated: 2023/02/22 14:19:53 by rmamison         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Awesom_PhoneBook

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

.PHONY: all clean fclean re
