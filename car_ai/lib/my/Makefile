##
## EPITECH PROJECT, 2021
## myLib
## File description:
## myLib makefile
##

CC = gcc
override CFLAGS = -O
LIB_DIR = ../
LIB = libmy.a
INCLUDE_DIR_PATH = ../../include/
HEADER = my.h

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

.PHONY : all
all : $(LIB_DIR)$(LIB) $(INCLUDE_DIR_PATH)$(HEADER)

$(LIB_DIR)$(LIB) : $(OBJ)
	@ar -rc $(LIB_DIR)$(LIB) $(OBJ)
	@echo -e "$(OK_COLOR)Static library built: $(LIB)$(NO_COLOR)"

%.o : %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

$(INCLUDE_DIR_PATH) :
	@mkdir $(INCLUDE_DIR_PATH)

$(INCLUDE_DIR_PATH)$(HEADER) : $(INCLUDE_DIR_PATH)
	@cp $(HEADER) $(INCLUDE_DIR_PATH)$(HEADER)

.PHONY : clean
clean :
	@$(RM) ./*.o core

.PHONY : fclean
fclean : clean
	@$(RM) $(LIB_DIR)$(LIB)
	@$(RM) $(INCLUDE_DIR_PATH)$(HEADER)

.PHONY : re
re : fclean all
