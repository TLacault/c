#include "project.h"

void get_info_simtime(env_t *env)
{
    char *str = NULL;
    char **words = NULL;

    if (!env)
        return;
    fprintf(stdout, "GET_INFO_SIMTIME\n");
    fflush(stdout);
    str = stream_reader(stdin, INITIAL_READ_SIZE);
    words = parse_response(str, words, STANDARD_SIZE_WORDS);
    env->simtime = atof(words[3]);
    free(str);
    free(words);
}
