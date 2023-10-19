# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 12:10:31 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/19 12:26:13 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalAbstract
HEADER = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRCS = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp
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