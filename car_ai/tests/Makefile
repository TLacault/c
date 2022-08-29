##
## EPITECH PROJECT, 2021
## Need4Stek
## File description:
## Unit tests makefile
##

CC = gcc
EXEC = unit_tests
INCLUDESDIR_PATHS = $(patsubst -I%,%,$(CFLAGS))
CFLAGS := $(patsubst %,-I%,$(patsubst ./%,../%,$(filter ./%,$(INCLUDESDIR_PATHS))) $(patsubst %,../%,$(filter ../%,$(INCLUDESDIR_PATHS)))) $(filter-out -I%,$(CFLAGS))

LIBDIR_PATHS = $(patsubst -L%,%,$(LDFLAGS))
LDFLAGS := $(patsubst %,-L%,$(patsubst ./%,../%,$(filter ./%,$(LIBDIR_PATHS))) $(patsubst %,../%,$(filter ../%,$(LIBDIR_PATHS)))) $(filter-out -L%,$(LDFLAGS))
LDLIBS += -lcriterion
SRC_DIR := ../$(SRC_DIR)

SRC = $(filter-out $(SRC_DIR)main.c,$(wildcard $(SRC_DIR)*.c))
OBJ = $(SRC:.c=.o)
UNIT_TESTS_SRC = $(wildcard *.c)
UNIT_TESTS_OBJ = $(UNIT_TESTS_SRC:.c=.o)

.PHONY : all
all : fclean $(EXEC)
	@-cd .. && ./$(EXEC)
	@gcovr -r $(SRC_DIR)
	@gcovr -r $(SRC_DIR) --branch
	@find $(SRC_DIR) -type f -regextype sed -regex ".*/\(.*.\(o\|gcno\|gcda\)\|core\)" -delete

$(EXEC) : $(OBJ) $(UNIT_TESTS_OBJ)
	@$(CC) -o ../$@ $^ $(LDFLAGS) $(LDLIBS) --coverage

$(SRC_DIR)%.o : $(SRC_DIR)%.c
	@$(CC) -o $@ -c $< $(CFLAGS) --coverage

%.o : %.c
	@$(CC) -o $@ -c $< -Wall -Wextra -Werror -O

.PHONY : clean
clean :
	@$(RM) ./*.o core

.PHONY : fclean
fclean : clean
	@$(RM) ../$(EXEC)
