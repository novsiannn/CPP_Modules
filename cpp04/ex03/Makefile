# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 15:50:11 by novsiann          #+#    #+#              #
#    Updated: 2024/01/14 15:24:00 by novsiann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= amateria

SRCS		:= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS		:= $(SRCS:.cpp=.o)

BLUE		:= \033[1;34m
WHITE 		:= \033[0m

CFLAGS		:= -g -o -Wall -Werror -Wextra -std=c++98

CC			:= c++

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	 @echo  "\n"
	 @echo	"$(BLUE)	 _   _  ______      _______ _____          _   _ _   _"
	 @echo	"	| \ | |/ __ \ \    / / ____|_   _|   /\   | \ | | \ | |"
	 @echo	"	|  \| | |  | \ \  / / (___   | |    /  \  |  \| |  \| |"
	 @echo	"	|     | |  | |\ \/ / \___ \  | |   / /\ \ |     |     |"
	 @echo	"	| |\  | |__| | \  /  ____) |_| |_ / ____ \| |\  | |\  |"
	 @echo	"	|_| \_|\____/   \/  |_____/|_____/_/    \_\_| \_|_| \_| $(WHITE)"
	 @echo  "\n"
                                                        

%.o: %.cpp
	$(CC) -c $< -o $@

.PHONY: clean all re fclean

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

all: $(NAME)