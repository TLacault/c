#ifndef RESOURCES_H_
#define RESOURCES_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct res_s
{
    sfTexture *alien_t_1;
    sfTexture *alien_t_2;
    sfTexture *crosshair_t;
    sfTexture *gameover_t;
    sfTexture *space_t;
    sfTexture *title_t;
    sfTexture *ufo_t;
    sfSprite *alien_1;
    sfSprite *alien_2;
    sfSprite *crosshair;
    sfSprite *gameover;
    sfSprite *space;
    sfSprite *title;
    sfSprite *ufo;
    sfMusic *music;
} res_t;

#endif