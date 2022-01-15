CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = a.out
SRCS = main.cpp span.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
