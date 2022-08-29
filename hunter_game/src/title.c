#include "hunter.h"

void title(sfRenderWindow *window, res_t *res, int time)
{
    sfVector2f pos = {575, 350};
    sfVector2f size = {1.5, 1.5};

    if (time < 2000) {
        sfSprite_setScale(res->title, size);
        sfSprite_setPosition(res->title, pos);
        sfRenderWindow_drawSprite(window, res->title, NULL);
    }
}