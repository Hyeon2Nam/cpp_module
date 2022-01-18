# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 12:48:41 by hyenam            #+#    #+#              #
#    Updated: 2022/01/18 13:05:55 by hyenam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC := clang++
RM := rm -rf
CFLAGS := -Wall -Werror -Wextra
SRCS = 	./megaphone.cpp

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