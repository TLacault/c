/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compare 2 strings -->
** mode : 0 [same] | 1 [str_a in str_b] | 2 [str_b in str_a]
** return : 0 same | 1 different
*/

#include "my.h"

int prio_a(char *str_a, char *str_b)
{
    int pos = 0;

    while (str_a[pos] != 0) {
        if (str_a[pos] != str_b[pos])
            return (1);
        pos++;
    }
    return (0);
}

int prio_b(char *str_a, char *str_b)
{
    int pos = 0;

    while (str_b[pos] != 0) {
        if (str_a[pos] != str_b[pos])
            return (1);
        pos++;
    }
    return (0);
}

int same(char *str_a, char *str_b)
{
    int pos = 0;

    while (str_a[pos] != 0 || str_b[pos] != 0) {
        if (str_a[pos] != str_b[pos])
            return (1);
        pos++;
    }
    return (0);
}

int my_strcmp(char *str_a, char *str_b, int mode)
{
    int check;

    if (mode == 1)
        check = prio_a(str_a, str_b);
    else if (mode == 2)
        check = prio_b(str_a, str_b);
    else
        check = same(str_a, str_b);
    return (check);
}