#include "project.h"

void lidar_left(env_t *env)
{
    int pos = 0;
    int count = 0;

    while (pos != 1) {
        count += env->lidar[pos];
        pos++;
    }
    env->lid_left = count;
}

void lidar_middle(env_t *env)
{
    int pos = 15;
    int count = 0;

    while (pos != 16) {
        count += env->lidar[pos];
        pos++;
    }
    env->lid_mid = count;
}

void lidar_right(env_t *env)
{
    int pos = 31;
    int count = 0;

    while (pos != 32) {
        count += env->lidar[pos];
        pos++;
    }
    env->lid_right = count;
}

void check_stop(env_t *env)
{
    if (env->lid_left < 200 && env->lid_mid < 200 && env->lid_right < 200) {
        car_backwards(1);
        env->stop = 1;
    }
}