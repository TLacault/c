#include "project.h"

static int copy_into_lidar(env_t *env, char **args);

static const size_t lidar_arr_size = 32;

int init_lidar(env_t *env)
{
    size_t i;

    if (!env)
        return (1);
    env->lidar = malloc(lidar_arr_size * sizeof env->lidar);
    for (i = 0; i < lidar_arr_size; i++)
        env->lidar[i] = 0.f;
    return (0);
}

int get_info_lidar(env_t *env)
{
    char *str = NULL;
    char **words = NULL;

    if (!env)
        return (1);
    fprintf(stdout, "GET_INFO_LIDAR\n");
    fflush(stdout);
    str = stream_reader(stdin, INITIAL_READ_SIZE);
    words = parse_response(str, words, LIDAR_SIZE_WORDS);
    copy_into_lidar(env, words);
    free(str);
    free(words);
    return (0);
}

static int copy_into_lidar(env_t *env, char **words)
{
    size_t i;
    size_t pos_words = 3;

    if (!env || !words)
        return (1);
    for (i = 0; i < lidar_arr_size; i++)
        env->lidar[i] = atof(words[pos_words++]);
    return (0);
}
