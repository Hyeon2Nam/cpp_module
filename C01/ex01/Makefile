# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:32:58 by hyenam            #+#    #+#              #
#    Updated: 2022/01/20 21:57:00 by hyenam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz
CC := clang++
RM := rm -rf
CFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = 	./main.cpp ./Zombie.cpp ./ZombieHorde.cpp

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