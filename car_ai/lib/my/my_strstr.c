/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** locate a substring
*/

static char *find_str(char *str, char const *to_find);

char *my_strstr(char *str, char const *to_find)
{
    if (str[0] != '\0')
        return (find_str(str, to_find));
    else
        return (0);
}

static char *find_str(char *str, char const *to_find)
{
    int i = 0;

    while (to_find[i] != '\0') {
        if (str[i] != to_find[i])
            return (my_strstr(str + 1, to_find));
        i++;
    }
    return (str);
}
