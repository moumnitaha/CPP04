# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 18:39:53 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/11 16:07:08 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria
HEADER = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
RM = rm -rf

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $@

%.o: %.cpp $(SRCS) $(HEADER)
	$(CC) $(FLAGS) $(STD) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all