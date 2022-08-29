##
## EPITECH PROJECT, 2020
## bootstrap
## File description:
## Makefile
##

SRC			=	./src/main.c	\
				./src/background.c	\
				./src/title.c	\
				./src/timer.c	\
				./src/load_res.c	\
				./src/crosshair.c	\
				./src/spawn_alien.c	\
				./src/kill.c	\
				./src/gameover.c	\
				./src/random.c

BINARY_NAME	=	my_hunter

BINARY_TESTS_NAME	=	test

CFLAGS		=	-W -Wall -Wextra -g

CPPFLAGS	=	-I ./include

LDFLAFS		=	-L ./lib/my -lmy --coverage -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

T_LDFLAGS	=	-lcriterion $(LDFLAFS)

all:	libmy.a
		gcc -o $(BINARY_NAME) $(CFLAGS) $(SRC) $(CPPFLAGS) $(LDFLAFS)

libmy.a:
			cd lib/my/ && make all

clean:
			rm -f /src/*.o
			rm -f /lib/my/*.o
			rm -f *~

fclean:		clean
			rm -f lib/libmy.a
			rm -f $(BINARY_NAME)
			rm -f *.gcno
			rm -f *.gcda
			rm -f $(BINARY_TESTS_NAME)
			cd lib/my/ && make fclean

re:		fclean all

tests_compile:		libmy.a
					rm -f *.gcno
					rm -f *.gcda
					gcc -o $(BINARY_TESTS_NAME) $(TEST) $(CFLAGS) $(T_LDFLAGS) $(CPPFLAGS)

tests_run:		tests_compile
				./$(BINARY_TESTS_NAME)

tests_run_branches:		tests_compile
						./$(BINARY_TESTS_NAME)
