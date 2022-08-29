/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** Concatenates n characters
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    char *addr_dest = dest;

    while (*dest)
        dest++;
    while (nb-- != 0 && (*dest++ = *src++) != '\0');
    return (addr_dest);
}
