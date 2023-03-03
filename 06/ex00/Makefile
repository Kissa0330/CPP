# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtakano <rtakano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 09:04:41 by takanoraika       #+#    #+#              #
#    Updated: 2023/03/02 22:46:28 by rtakano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Cast
SRCS=main.cpp Cast.cpp
OBJS=$(SRCS:.cpp=.o)
CC=c++
CPPFLAGS=-std=c++98 -pedantic -Wall -Wextra -Werror
.PHONY: all clean fclean re 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

.cpp.o:
	$(CC) $(CPPFLAGS) -o $@ -c $*.cpp

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re:fclean all
