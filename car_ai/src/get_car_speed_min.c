#include "project.h"

void get_car_speed_min(env_t *env)
{
    char *str = NULL;
    char **words = NULL;

    if (!env)
        return;
    fprintf(stdout, "GET_CAR_SPEED_MIN\n");
    fflush(stdout);
    str = stream_reader(stdin, INITIAL_READ_SIZE);
    words = parse_response(str, words, STANDARD_SIZE_WORDS);
    env->min_speed = atof(words[3]);
    free(str);
    free(words);
}
