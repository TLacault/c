/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** Display N if the integer is negative, P, if positive or null
*/

void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}
