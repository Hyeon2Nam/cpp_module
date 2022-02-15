NAME = DiamondTrap
CXX := c++
RM := rm -rf
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow
SRCS = 	./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp ./DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

.PHONY : all clean fclean re

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all