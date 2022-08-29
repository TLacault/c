/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Display one-by-one the characters of a string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    while (*str != '\0')
        my_putchar(*str++);
    my_putchar('\n');
    return (0);
}
