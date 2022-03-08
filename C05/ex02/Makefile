# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:32:58 by hyenam            #+#    #+#              #
#    Updated: 2022/03/08 19:01:11 by hyenam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CXX := c++
RM := rm -rf
CXXFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = 	./main.cpp ./Bureaucrat.cpp ./Form.cpp\
		./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp ./PresidentialPardonForm.cpp

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