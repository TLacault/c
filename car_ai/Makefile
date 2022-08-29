##
## EPITECH PROJECT, 2021
## Need4Stek
## File description:
## Master makefile
##

# ToDo:
# - Manage calls to libraries Makefiles
DEBUG = yes
CC = gcc
EXEC = ai
LIB_DIR = lib/
LIBMY_DIR = lib/my/
TEST_DIR = tests/
INCLUDE_DIR = -I./include/
export SRC_DIR = src/

ifeq ($(DEBUG),yes)
	export CFLAGS = -Wall -Wextra $(INCLUDE_DIR) -O -g
	export LDFLAGS = -L./lib
	export LDLIBS = -lmy
else
	export CFLAGS = -Wall -Wextra -Werror $(INCLUDE_DIR) -O
	export LDFLAGS = -L./lib
	export LDLIBS = -lmy
endif
LIBS = $(LDLIBS)
export SRC = $(wildcard $(SRC_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)/parser/*.c)
SRC += $(wildcard $(SRC_DIR)/reader/*.c)
OBJ = $(SRC:.c=.o)
export COM_COLOR 	= \033[0;34m
export OBJ_COLOR 	= \033[0;36m
export OK_COLOR 	= \033[0;32m
export ERROR_COLOR	= \033[0;31m
export WARN_COLOR 	= \033[0;33m
export NO_COLOR 	= \033[m

.PHONY : all
all : $(addsuffix .a,$(addprefix $(LIB_DIR), $(patsubst -l%,%,$(LIBS)))) $(EXEC)
ifeq ($(DEBUG),yes)
	@echo -e "$(WARN_COLOR)Generation in debug mode$(NO_COLOR)"
else
	@echo -e "$(OK_COLOR)Generation in release mode$(NO_COLOR)"
endif

$(EXEC) : $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS) -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

%.o : %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY : clean
clean :
	@find $(SRC_DIR) -type f -regextype sed -regex ".*/\(.*.o\|core\)" -delete
	@$(MAKE) -C $(LIBMY_DIR) --no-print-directory $@
	@$(MAKE) -C $(TEST_DIR) --no-print-directory $@

.PHONY : fclean
fclean : clean
	@$(RM) ./$(EXEC)
	@$(MAKE) -C $(LIBMY_DIR) --no-print-directory $@
	@$(MAKE) -C $(TEST_DIR) --no-print-directory $@

.PHONY : re
re : fclean all

$(LIB_DIR)%.a :
	@$(MAKE) -C $(LIBMY_DIR) --no-print-directory

.PHONY : tests_run
tests_run : $(addsuffix .a,$(addprefix $(LIB_DIR), $(patsubst -l%,%,$(LIBS))))
	@find $(SRC_DIR) -type f -regextype sed -regex ".*/\(.*.o\|core\)" -delete
	@$(MAKE) -C $(TEST_DIR) --no-print-directory
