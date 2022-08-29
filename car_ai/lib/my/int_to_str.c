/*
** EPITECH PROJECT, 2020
** int_to_str
** File description:
** put a number in a string
*/

#include "my.h"

int nb_len(int nb)
{
    int i = 0;
    int sign = 0;

    if (nb < 0) {
        nb *= -1;
        sign = 1;
    }
    while (nb >= 1) {
        i++;
        nb /= 10;
    }
    return (i + sign);
}

char *int_to_str(int nb)
{
    int i = nb_len(nb);

    int sign = (nb < 0) ? 0 : 1;
    char *nbr = malloc(sizeof(char) * (i + sign + 2));
    nbr[i] = '\n';
    nbr[i + 1] = 0;

    if (i == 0)
        return ("0\n");
    if (nb < 0)
        nb *= -1;
    i--;
    while (i >= 0) {
        nbr[i] = nb % 10 + 48;
        nb /= 10;
        i--;
    }
    if (sign == 0)
        nbr[0] = '-';
    return (nbr);
}