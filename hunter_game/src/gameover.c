#include "hunter.h"

int check_death(res_t *res)
{
    sfVector2f pos_alien_1 = sfSprite_getPosition(res->alien_1);
    sfVector2f pos_alien_2 = sfSprite_getPosition(res->alien_1);
    sfVector2f pos_ufo = sfSprite_getPosition(res->ufo);

    if (pos_alien_1.y > 1080 && pos_alien_2.y > 1080 && pos_ufo.y > 1080)
        return (1);
    return (0);
}

void gameover(sfRenderWindow *window, res_t *res)
{
    sfVector2f pos = {520, 75};
    sfVector2f size = {0.15, 0.15};

    if (check_death(res) == 1) {
        sfSprite_setScale(res->gameover, size);
        sfSprite_setPosition(res->gameover, pos);
        sfRenderWindow_drawSprite(window, res->gameover, NULL);
    }
}