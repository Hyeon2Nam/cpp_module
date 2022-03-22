# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:32:58 by hyenam            #+#    #+#              #
#    Updated: 2022/03/22 18:52:35 by hyenam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CXX := c++
RM := rm -rf
CXXFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = 	./main.cpp ./Span.cpp

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