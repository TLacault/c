/*
** EPITECH PROJECT, 2020
** my_pow
** File description:
** desc
*/

int my_pow(int a, int b)
{
    int pow = a;

    if (b == 0) {
        return (1);
    } else if (b < 0) {
        return (0);
    } else {
        while (b > 1) {
            pow = pow * a;
            b--;
        }
        return (pow);
    }
}
