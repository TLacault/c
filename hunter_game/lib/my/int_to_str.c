/*
** EPITECH PROJECT, 2020
** my_int_to_string
** File description:
** desc
*/

int my_strlen(char const *str);
char *my_revstr(char *str);

char *int_to_str(char *str, int number)
{
    int a = my_strlen(str);
    
    while(number != 0) {
        str[a] = number % 10 + 48;
        number = number / 10;
        a++;
    }
    str = my_revstr(str);
    return (str);
}
