#include "hunter.h"

int randomize(int time)
{
    int nbr = time % 10;

    if (nbr <= 3) {
        if (nbr == 0 || nbr == 1)
            return (1);
        else
            return (2);
    } else if (nbr <= 7) {
        if (nbr == 4 || nbr == 5)
            return (3);
        else
            return (4);
    } else {
        return (5);
    }
}