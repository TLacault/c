/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** Returns a boolean if the string  only contains alphabetical characters or not
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
