##
## EPITECH PROJECT, 2020
## PUSHSWAP
## File description:
## Makefile
##

SRC			=	my_put_nbr.c	\
				my_putchar.c	\
				my_putstr.c		\
				my_strlen.c		\
				get_size.c		\
				my_pow.c	\
				my_getnbr.c

OBJ			=	$(SRC:.c=.o)

all:		libmy.a

libmy.a:	$(OBJ)
			ar rc libmy.a $(OBJ)

rm:
			rm -f $(OBJ)
			rm -f libmy.a

fclean:		rm
