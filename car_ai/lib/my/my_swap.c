/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** Swap the content of two integers
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
