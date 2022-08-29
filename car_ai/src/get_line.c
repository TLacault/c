#include "project.h"

void get_line(env_t *env)
{
    size_t cmd_size = 0;
    int len = 0;

    if (getline(&env->cmd, &cmd_size, stdin) == -1)
        env->cmd = "ERR";
    else {
        len = my_strlen(env->cmd);
        env->cmd[len - 1] = 0;
    }
}