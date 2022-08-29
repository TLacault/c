#include "project.h"

void wheels_dir(float angle)
{
    char **args = malloc(sizeof(char *) * 4);
    char *number = malloc(sizeof(char) * 5);
    char *str = NULL;
    char *command;

    gcvt(angle, 4, number);
    args[0] = strdup("WHEELS_DIR:");
    args[1] = strdup(number);
    args[2] = strdup("\n");
    args[3] = 0;
    command = concat_str(args);
    fprintf(stdout, command);
    fflush(stdout);
    str = stream_reader(stdin, INITIAL_READ_SIZE);
    free(number);
    free(str);
    free(command);
}