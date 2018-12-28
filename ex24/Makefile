# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 15:50:57 by bsprigga          #+#    #+#              #
#    Updated: 2018/11/20 18:21:25 by bsprigga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OUT = ft_putchar.o ft_putstr.o \
ft_swap.o ft_strlen.o ft_strcmp.o

SRC = srcs/

INCLUDES = includes/ # it can contain .h files

all: $(NAME)

$(NAME): $(OUT)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

ft_putchar.o: srcs/ft_putchar.c # may act not only as launchr of depentent rules,
	gcc -Wall -Wextra -Werror -c $(SRC)ft_putchar.c -I$(INCLUDES)

ft_putstr.o: srcs/ft_putstr.c # but also checks dependencies on pointed files
	gcc -Wall -Wextra -Werror -c $(SRC)ft_putstr.c -I$(INCLUDES)

ft_swap.o: srcs/ft_swap.c # if a valid file.o is stated then "make" checks
	gcc -Wall -Wextra -Werror -c $(SRC)ft_swap.c -I$(INCLUDES)

ft_strlen.o: srcs/ft_strlen.c # whether modify date of .c file is younger than date of .o file
	gcc -Wall -Wextra -Werror -c $(SRC)ft_strlen.c -I$(INCLUDES)

ft_strcmp.o: srcs/ft_strcmp.c # if so then this rule will be executed and .c file will be recompiled to .o
	gcc -Wall -Wextra -Werror -c $(SRC)ft_strcmp.c -I$(INCLUDES)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
