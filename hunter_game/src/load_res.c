#include "resources.h"

void create_texture(res_t *res)
{
    res->alien_t_1 = sfTexture_createFromFile("resources/texture/alien_1.png", NULL);
    res->alien_t_2 = sfTexture_createFromFile("resources/texture/alien_2.png", NULL);
    res->crosshair_t = sfTexture_createFromFile("resources/texture/crosshair4.png", NULL);
    res->gameover_t = sfTexture_createFromFile("resources/texture/gameover.png", NULL);
    res->space_t = sfTexture_createFromFile("resources/texture/space.jpg", NULL);
    res->title_t = sfTexture_createFromFile("resources/texture/title.png", NULL);
    res->ufo_t = sfTexture_createFromFile("resources/texture/ufo.png", NULL);
}

void create_sprite(res_t *res)
{
    res->alien_1 = sfSprite_create();
    res->alien_2 = sfSprite_create();
    res->crosshair = sfSprite_create();
    res->gameover = sfSprite_create();
    res->space = sfSprite_create();
    res->title = sfSprite_create();
    res->ufo = sfSprite_create();
}

void apply_texture(res_t *res)
{
    sfSprite_setTexture(res->alien_1, res->alien_t_1, sfFalse);
    sfSprite_setTexture(res->alien_2, res->alien_t_2, sfFalse);
    sfSprite_setTexture(res->crosshair, res->crosshair_t, sfFalse);
    sfSprite_setTexture(res->gameover, res->gameover_t, sfFalse);
    sfSprite_setTexture(res->space, res->space_t, sfFalse);
    sfSprite_setTexture(res->title, res->title_t, sfFalse);
    sfSprite_setTexture(res->ufo, res->ufo_t, sfFalse);
}

void launch_music(res_t *res)
{
    res->music = sfMusic_createFromFile("resources/sounds/theme.wav");
    sfMusic_setVolume(res->music, 50);
    sfMusic_play(res->music);
}

void load_res(res_t *res)
{
    create_texture(res);
    create_sprite(res);
    apply_texture(res);
    launch_music(res);
}