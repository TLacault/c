#include "hunter.h"

void background(sfRenderWindow *window, res_t *res)
{
    sfRenderWindow_drawSprite(window, res->space, NULL);
}