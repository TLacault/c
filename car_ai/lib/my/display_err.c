/*
** EPITECH PROJECT, 2021
** Need4Stek
** File description:
** Display error
*/

#include <unistd.h>
#include "my.h"

int display_err(char const *err_descr)
{
    char const *prefix_msg = "Error: ";
    int size_prefix = my_strlen(prefix_msg);
    int size_descr = my_strlen(err_descr);
    int msg_size = size_prefix + size_descr;
    char err_msg[msg_size + 1];
    int msg_bytes_written = 0;

    my_strcpy(err_msg, prefix_msg);
    my_strcat(err_msg, err_descr);
    msg_bytes_written = write(2, err_msg, msg_size);
    if (msg_bytes_written != msg_size)
        return (1);
    return (0);
}
