#include "project.h"

char **parse_response(char *str, char **words, size_t nb_words_max)
{
    char *str_token = NULL;
    size_t nb_words = 0;

    if (!str || nb_words_max < 1)
        return (NULL);
    words = malloc(nb_words_max * sizeof *words);
    str_token = strtok(str, ":");
    while (str_token && nb_words < nb_words_max - 1) {
        words[nb_words++] = str_token;
        if (nb_words == nb_words_max - 1)
            str_token = strtok(NULL, "\n");
        else
            str_token = strtok(NULL, ":");
    }
    words[nb_words] = str_token;
    return (words);
}
