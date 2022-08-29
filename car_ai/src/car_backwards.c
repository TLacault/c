#include "project.h"

void car_backwards(float speed)
{
    char **args = malloc(sizeof(char *) * 4);
    char *number = malloc(sizeof(char) * 5);
    char *str = NULL;
    char *command;

    gcvt(speed, 4, number);
    args[0] = strdup("CAR_BACKWARDS:");
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