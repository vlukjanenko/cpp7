# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majosue <majosue@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 21:25:37 by majosue           #+#    #+#              #
#    Updated: 2022/02/21 17:01:31 by majosue          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -MMD
SRC = main.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $<

include $(wildcard *.d)

clean:
	rm -f $(OBJ)
	rm -f $(wildcard *.d)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
