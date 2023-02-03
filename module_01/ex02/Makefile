
NAME = HI_THIS_IS_BRAIN

SRC = main.cpp

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
