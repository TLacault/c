/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** find the number in a string
*/

#include "my.h"

int my_getnbr(char *str)
{
    int number = 0;
    int pos = 0;

    if (str[0] == '-')
        pos++;
    while (str[pos] != '\0') {
        number = number + str[pos] - 48;
        number = number * 10;
        pos++;
    }
    number = number / 10;
    if (str[0] == '-')
        number = -1 * number;
    return (number);
}