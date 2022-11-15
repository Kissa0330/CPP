# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takanoraika <takanoraika@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:13:34 by takanoraika       #+#    #+#              #
#    Updated: 2022/11/15 15:49:12 by takanoraika      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=account
SRCS=test.cpp Account.cpp
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
