# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 21:01:58 by yabukirento       #+#    #+#              #
#    Updated: 2025/05/04 11:39:40 by ryabuki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = thirdFixedClass
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INCLUDES = -I includes

SRCS =	srcs/main.cpp \
		srcs/Point.cpp \
		srcs/Fixed.cpp \
		srcs/bsp.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re