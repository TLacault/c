/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Displays the number given as a parameter
*/

void my_putchar(char c);
int my_putstr(char const *str);

int my_put_nbr(int nb)
{
    int rest;

    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = (nb * -1);
    }
    if (nb > 9) {
            rest = (nb % 10);
            my_put_nbr(nb / 10);
            my_putchar(48 + rest);
    } else
        my_putchar(48 + nb);
    return (0);
}
