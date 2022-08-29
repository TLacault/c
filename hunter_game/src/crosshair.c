#include "hunter.h"

void crosshair(sfRenderWindow *window, res_t *res)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);
    sfVector2f new_pos;
    new_pos.x = pos.x - 50;
    new_pos.y = pos.y - 50;
    sfSprite_setPosition(res->crosshair, new_pos);
    sfRenderWindow_drawSprite(window, res->crosshair, NULL);
}