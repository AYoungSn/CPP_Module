CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = convert
SRCS = main.cpp ScalarConversion.cpp
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
