NAME = easypizi
CPP= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = main.cpp \

INCS = easyfind.hpp

$(NAME): $(SRCS) $(INCS) Makefile
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : clean all

.PHONY: all clean fclean re