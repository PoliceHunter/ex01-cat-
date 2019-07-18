# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 14:31:51 by tmyrcell          #+#    #+#              #
#    Updated: 2019/07/18 14:47:43 by tmyrcell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c srcs/main.c

OBJECTS = ft_putchar.o ft_putstr.o ft_display_file.o main.o

FLAGS = -Wall -Wextra -Werror -c -I

INCLUDES = includes/

LIB = libft.a

all : $(LIB)

$(LIB):
	gcc $(FLAGS) $(INCLUDES) $(SRCS)
	ar rc $(LIB) $(OBJECTS)
	ranlib $(LIB)
	gcc -o $(NAME) $(LIB)

clean: 
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(LIB) ./$(NAME)

re: fclean all
