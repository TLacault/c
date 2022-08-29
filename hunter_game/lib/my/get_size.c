/*
** EPITECH PROJECT, 2020
** BSQ 
** File description:
** get_size
*/

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int get_size(char *path, struct stat file_stat)
{
    int size = 0;

    if (stat(path, &file_stat) < 0)
        return (-1);
    size = file_stat.st_size;
    return (size);
}