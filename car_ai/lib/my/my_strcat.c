/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenate two strings
*/

char *my_strcat(char *dest, char const *src)
{
    char *addr_dest = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0');
    return (addr_dest);
}
