# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:32:58 by hyenam            #+#    #+#              #
#    Updated: 2022/01/21 19:56:58 by hyenam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC := clang++
RM := rm -rf
CFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = 	./main.cpp ./Replace.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

.PHONY : all clean fclean re

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all