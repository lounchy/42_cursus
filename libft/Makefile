# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 12:31:14 by dbelinsk          #+#    #+#              #
#    Updated: 2019/11/06 15:33:22 by dbelinsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
FUNCT = $(shell find . -name '*.c' | rev | cut -c3- | cut -d '/' -f1 | rev) 
SOURCES = $(shell find . -name '*.c')
SRC_DIR = ./src/
OPTIONS = -I includes

OBJS = $(patsubst %, %.o, $(FUNCT))

all: $(NAME)

$(OBJS):
	gcc $(OPTIONS) $(FLAGS) -c $(SOURCES)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) -c $(SOURCES)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
