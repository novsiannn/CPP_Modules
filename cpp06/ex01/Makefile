# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 16:01:35 by novsiann          #+#    #+#              #
#    Updated: 2024/02/10 20:10:55 by novsiann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= converter

SRCS		:= main.cpp Serializer.cpp

OBJS		:= $(SRCS:.cpp=.o)

BLUE		:= \033[1;34m

CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -fsanitize=address

CC			:= c++

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	 @echo  "\n"
	 @echo	"$(BLUE)	 _   _  ______      _______ _____          _   _ _   _"
	 @echo	"	| \ | |/ __ \ \    / / ____|_   _|   /\   | \ | | \ | |"
	 @echo	"	|  \| | |  | \ \  / / (___   | |    /  \  |  \| |  \| |"
	 @echo	"	|     | |  | |\ \/ / \___ \  | |   / /\ \ |     |     |"
	 @echo	"	| |\  | |__| | \  /  ____) |_| |_ / ____ \| |\  | |\  |"
	 @echo	"	|_| \_|\____/   \/  |_____/|_____/_/    \_\_| \_|_| \_|"
	 @echo  "\n"
                                                        

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean all re fclean

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

all: $(NAME)
