#include "project.h"

int free_all(char **args)
{
    int i;

    if (!args)
        return (1);
    for (i = 0; i < 5; i++) {
        free(args[i]);
    }
    free(args);
    return (0);
}
