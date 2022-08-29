#include "hunter.h"

void loop_event(sfRenderWindow *window, res_t *res, int timer_count)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed) {
            if (sfMouse_isButtonPressed(sfMouseLeft))
                kill(window, res, timer_count);
        }
    }
}

void loop_window(sfRenderWindow *window, res_t *res)
{
    int timer_count = 0;
    sfClock *clock = sfClock_create();

    while (sfRenderWindow_isOpen(window)) {
        timer_count = timer(clock, timer_count);
        background(window, res);
        title(window, res, timer_count);
        crosshair(window, res);
        spawn_alien(window, res, timer_count);
        gameover(window, res);
        loop_event(window, res, timer_count);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfColor_fromRGB(0, 0, 0));
    }
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "HUNTER", sfResize | sfClose, NULL);
    sfRenderWindow_clear(window, sfColor_fromRGB(255, 255, 255));
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setMouseCursorVisible(window, 0);
    res_t res;

    load_res(&res);
    loop_window(window, &res);
    return (0);
}