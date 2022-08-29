/*
** EPITECH PROJECT, 2021
** DANTE
** File description:
** concat_str
*/

#include "my.h"

int get_len(char **args)
{
    int size = 0;
    int pos_args = 0;

    while (args[pos_args])
        size += my_strlen(args[pos_args++]);
    return (size + 1);
}

char *concat_str(char **args)
{
    int pos_args = 0;
    int pos_word = 0;
    int pos = 0;
    char *str = malloc(get_len(args) * sizeof str);

    while (args[pos_args]) {
        pos_word = 0;
        while (args[pos_args][pos_word])
            str[pos++] = args[pos_args][pos_word++];
        pos_args++;
    }
    str[pos] = '\0';
    return (str);
}
