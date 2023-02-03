
NAME = My_Awesom_PhoneBook

SRC = main.cpp PhoneBook.cpp

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $^ -o $@
clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
