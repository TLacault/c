#include "project.h"

void check_lid(env_t *env)
{
    int pos = 0;

    while (pos != 32) {
        fprintf(stderr, "LID %d : %f\n", pos, env->lidar[pos]);
        pos++;
    }
    fprintf(stderr, "\n");
}

void turn(env_t *env)
{
    float angle = 0;

    env->set_speed = 0.3;
    if (env->lid_right > env->lid_left) {
        angle = -0.35;
        angle += (float)env->lid_left / 3010;
    } else {
        angle = 0.35;
        angle -= (float)env->lid_right / 3010;
    }
    wheels_dir(angle);
}

void straight(env_t *env)
{
    wheels_dir(0);
    if (env->set_speed < 0.4)
        env->set_speed = 0.4;
    else if (env->lid_mid > 2000 && env->set_speed < 0.6)
        env->set_speed += 0.2;
}

void change_wheels(env_t *env)
{
    if (env->lid_left < 250 || env->lid_right < 250)
        turn(env);
    else if (env->lid_mid > env->lid_right && env->lid_mid > env->lid_left)
        straight(env);
    else
        turn(env);
    car_forward(env->set_speed);
}

void turn_wheels(env_t *env)
{
    lidar_left(env);
    lidar_right(env);
    lidar_middle(env);
    if (env->stop != 1)
        change_wheels(env);
}
