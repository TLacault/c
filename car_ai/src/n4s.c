#include "project.h"

void n4s(env_t *env)
{
    env->stop = 0;
    init_lidar(env);
    start_simulation();
    while (env->stop != 1) {
        get_info(env);
        turn_wheels(env);
    }
    car_forward(0);
    stop_simulation();
}
