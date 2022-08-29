/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** Returns the square root of the number given as arg
*/

int my_compute_square_root(int nb)
{
    int result = 1;

    if (nb <= 0)
        return (0);
    while ((result * result) != nb) {
        if (result++ > nb)
            return (0);
    }
    return (result);
}
