
NAME = Sed

SRC = $(wildcard ./*.cpp)

CC = c++ -std=c++98

FLAGS = -g -Wall -Wextra -Werror

RM = rm -rf

OBJ = $(SRC:%.cpp=%.o)


$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $^ -o $@
	$(RM) $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
