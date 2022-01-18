# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 12:48:41 by hyenam            #+#    #+#              #
#    Updated: 2022/01/18 14:22:47 by hyenam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC := clang++
RM := rm -rf
CFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = 	./main.cpp ./PhoneBook.cpp

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