#include "project.h"

void cycle_wait(float cycle)
{
    char **args = malloc(sizeof(char *) * 4);
    char *number = malloc(sizeof(char) * 5);
    char *str = NULL;
    char *command;

    gcvt(cycle, 4, number);
    args[0] = strdup("CYCLE_WAIT:");
    args[1] = strdup(number);
    args[2] = strdup("\n");
    args[3] = 0;
    command = concat_str(args);
    write(2, command, my_strlen(command));
    fprintf(stdout, command);
    fflush(stdout);
    str = stream_reader(stdin, INITIAL_READ_SIZE);
    free_all(args);
    free(number);
    free(str);
    free(command);
}