/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** Returns the first arg raised to power p recursively
*/

int my_compute_power_rec(int nb, int power)
{
    int result = 1;
    int i = 0;

    if (power == 0)
        return (result);
    if (power < 0)
        return (0);
    while (i < power) {
        result *= nb;
        i++;
    }
    result = nb * my_compute_power_rec(nb, power - 1);
    return (result);
}
