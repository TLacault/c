#include "project.h"

const size_t INITIAL_READ_SIZE = 250;
const size_t STANDARD_SIZE_WORDS = 5;
const size_t LIDAR_SIZE_WORDS = 36;

int main(void)
{
    env_t *env = malloc(sizeof *env);

    n4s(env);
    return (0);
}
