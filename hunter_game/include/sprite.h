#ifndef SPRITE_H_
#define SPRITE_H_

#include "hunter.h" // INCLUDE DE SPRITE.H DANS LES .c !!

struct sprite *sprite_s {

    sfTexture *ttr1 = sfTexture_createFromFile("./resources/texture/space.jpg", NULL);
    sfTexture *ttr2 = sfTexture_createFromFile("./resources/texture/crosshair4.jpg", NULL);

    sfSprite *spt1 = sfSprite_create();
    sfSprite *spt2 = sfSprite_create();

    sfSprite_setTexture(spt1, ttr1, sfFalse);
    sfSprite_setTexture(spt2, ttr2, sfFalse);

}sprite_t;


#endif