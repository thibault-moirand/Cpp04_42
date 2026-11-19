# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 11:11:37 by marvin            #+#    #+#              #
#    Updated: 2024/08/28 11:11:37 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp	\
	Animal.cpp	\
	Cat.cpp	\
	Dog.cpp	\
	WrongCat.cpp	\
	WrongAnimal.cpp	\

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
