#include "hunter.h"

void init_alien(res_t *res)
{
    sfVector2f pos = {880, 0};
    sfVector2f new_size_green = {0.35, 0.35};
    sfVector2f new_size_blue = {0.4, 0.4};
    sfVector2f new_size_red = {0.38, 0.38};

    sfSprite_setPosition(res->alien_1, pos);
    sfSprite_setScale(res->alien_1, new_size_green);
    sfSprite_setPosition(res->alien_2, pos);
    sfSprite_setScale(res->alien_2, new_size_blue);
    sfSprite_setPosition(res->ufo, pos);
    sfSprite_setScale(res->ufo, new_size_red);
}

void alien_1(sfRenderWindow *window, res_t *res, int time, int speed)
{
    sfVector2f new_pos;

    if (time > 2500) {
        new_pos = sfSprite_getPosition(res->alien_1);
        new_pos.y = new_pos.y + speed;
        sfSprite_setPosition(res->alien_1, new_pos);
        sfRenderWindow_drawSprite(window, res->alien_1, NULL);
    }
}

void alien_2(sfRenderWindow *window, res_t *res, int time, int speed)
{
    sfVector2f new_pos;

    if (time > 5500) {
        new_pos = sfSprite_getPosition(res->alien_2);
        new_pos.y = new_pos.y + speed + 1;
        sfSprite_setPosition(res->alien_2, new_pos);
        sfRenderWindow_drawSprite(window, res->alien_2, NULL);
    }
}

void ufo(sfRenderWindow *window, res_t *res, int time, int speed)
{
    sfVector2f new_pos;

    if (time > 9500) {
        new_pos = sfSprite_getPosition(res->ufo);
        new_pos.y = new_pos.y + speed + 2;
        sfSprite_setPosition(res->ufo, new_pos);
        sfRenderWindow_drawSprite(window, res->ufo, NULL);
    }
}

void spawn_alien(sfRenderWindow *window, res_t *res, int time)
{
    int speed = 5 + time / 7000;

    if (time < 2000) {
        init_alien(res);
    } else {
        alien_1(window, res, time, speed);
        alien_2(window, res, time, speed);
        ufo(window, res, time, speed);
    }
}