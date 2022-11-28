# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:48:46 by takanoraika       #+#    #+#              #
#    Updated: 2022/11/28 21:21:05 by takanoraika      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Brain
SRCS=main.cpp
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
