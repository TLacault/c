#include "project.h"

char *stream_reader(FILE* stream, size_t size)
{
    char c;
    size_t i = 0;
    char *str = NULL;

    if (!stream || size < 1)
        return (NULL);
    str = realloc(NULL, size * sizeof *str);
    if (!str)
        return (NULL);
    while (EOF != (c = fgetc(stream)) && c != '\n') {
        str[i++] = c;
        if (i == size) {
            size = (3 * size) / 2 + 8;
            str = realloc(str, size * sizeof *str);
            if (!str)
                return (NULL);
        }
    }
    str[i++]='\0';
    return realloc(str, i * sizeof *str);
}
