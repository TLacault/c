#include "hunter.h"

int timer(sfClock *clock, int timer_count)
{
    sfTime time;

    time = sfClock_getElapsedTime(clock);
    if (sfTime_asMilliseconds(time) > 1) {
        timer_count = timer_count + sfTime_asMilliseconds(time);
        sfClock_restart(clock);
    }
    return (timer_count);
}