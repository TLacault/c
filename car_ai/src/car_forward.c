#include "project.h"

void car_forward(float speed)
{
    char **args = malloc(4 * sizeof *args);
    char *number = malloc(5 * sizeof number);
    char *str = NULL;
    char *command;

    gcvt(speed, 4, number);
    args[0] = strdup("CAR_FORWARD:");
    args[1] = strdup(number);
    args[2] = strdup("\n");
    args[3] = NULL;
    command = concat_str(args);
    fprintf(stdout, command);
    fflush(stdout);
    str = stream_reader(stdin, INITIAL_READ_SIZE);
    free(args);
    free(number);
    free(str);
    free(command);
}
