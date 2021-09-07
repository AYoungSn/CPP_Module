CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra
NAME = karenFilter
SRCS = main.cpp Karen.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -std=c++98 -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
