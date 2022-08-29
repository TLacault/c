/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Reverses a string
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int i = 0;
    int lenght = my_strlen(str) - 1;
    char char_tmp;

    while (i < lenght / 2) {
        char_tmp = str[lenght - i];
        str[lenght - i] = str[i];
        str[i] = char_tmp;
        i++;
    }
    return (str);
}
