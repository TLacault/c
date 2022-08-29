#ifndef HUNTER_H_
#define HUNTER_H_

#define ERROR_EXIT 84
#define SUCCESS_EXIT 0

#include "my.h"
#include "resources.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

void load_res(res_t *res);
int timer(sfClock *clock, int timer_count);
void background(sfRenderWindow *window, res_t *res);
void title(sfRenderWindow *window, res_t *res, int time);
void crosshair(sfRenderWindow *window, res_t *res);
void spawn_alien(sfRenderWindow *window, res_t *res, int time);
int kill(sfRenderWindow *window, res_t *res, int time);
void gameover(sfRenderWindow *window, res_t *res);
int randomize(int time);

#endif