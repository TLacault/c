#include "hunter.h"

int hit_alien_1(res_t *res, sfVector2f cursor, int time)
{
    int column = randomize(time);
    sfVector2f pos = sfSprite_getPosition(res->alien_1);
    sfVector2f new_pos = {column * 320 - 150, 0};

    if (cursor.x > pos.x + 20 && cursor.x < pos.x + 250) {
        if (cursor.y > pos.y + 20 && cursor.y < pos.y + 200) {
            sfSprite_setPosition(res->alien_1, new_pos);
            return (1);
        }
    }
    return (0);
}

int hit_alien_2(res_t *res, sfVector2f cursor, int time)
{
    int column = randomize(time);
    sfVector2f pos = sfSprite_getPosition(res->alien_2);
    sfVector2f new_pos = {column * 320 - 150, 0};

    if (cursor.x > pos.x && cursor.x < pos.x + 204) {
        if (cursor.y > pos.y && cursor.y < pos.y + 149) {
            sfSprite_setPosition(res->alien_2, new_pos);
            return (1);
        }
    }
    return (0);
}

int hit_ufo(res_t *res, sfVector2f cursor, int time)
{
    int column = randomize(time);
    sfVector2f pos = sfSprite_getPosition(res->ufo);
    sfVector2f new_pos = {column * 320 - 150, 0};

    if (cursor.x > pos.x && cursor.x < pos.x + 243) {
        if (cursor.y > pos.y && cursor.y < pos.y + 107) {
            sfSprite_setPosition(res->ufo, new_pos);
            return (1);
        }
    }
    return (0);
}

int kill(sfRenderWindow *window, res_t *res, int time)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);
    sfVector2f cursor = {pos.x, pos.y};

    if (hit_alien_1(res, cursor, time) == 1) {
        return (1);
    } else if (hit_alien_2(res, cursor, time) == 1) {
        return (2);
    } else {
        if (hit_ufo(res, cursor, time) == 1)
            return (3);
    }
    return (0);
}