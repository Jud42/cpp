NAME = megaphone

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

RM = rm -rf

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean: 
	$(RM) *.o

re: fclean $(NAME)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
