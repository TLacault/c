#include "project.h"

void start_simulation(void)
{
    fprintf(stdout, "START_SIMULATION\n");
    fflush(stdout);
    stream_reader(stdin, INITIAL_READ_SIZE);
}

void stop_simulation(void)
{
    fprintf(stdout, "STOP_SIMULATION\n");
    fflush(stdout);
    stream_reader(stdin, INITIAL_READ_SIZE);
}
