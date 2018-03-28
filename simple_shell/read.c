#include "shell.h"

void readline()
{
        char *line;
        size_t size = 1024;

        line = malloc(sizeof(char *) * size);
        getline(&line, &size, stdin);
}
