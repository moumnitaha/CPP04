# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 12:10:31 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/04 17:59:23 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalAbstract
HEADER = Animal.hpp Cat.hpp Dog.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:%.cpp=%.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) $(STD) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all