/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** Returns the smallest prime number that is greater than, or equal to arg
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (i < 2147483647) {
        if (my_is_prime(i))
            return (i);
        i++;
    }
    return (0);
}
