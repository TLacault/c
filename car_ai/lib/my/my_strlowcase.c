/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** Returns lowercase letters
*/

int my_strlen(char const *str);

char *my_strlowcase(char *str)
{
    int str_size = my_strlen(str);

    for (int i = 0; i < str_size; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}
