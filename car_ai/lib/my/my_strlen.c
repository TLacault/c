/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** Returns the number of characters of a string
*/

int my_strlen(char const *str)
{
    int nbr_char = 0;

    while (*str++)
        nbr_char++;
    return (nbr_char);
}
