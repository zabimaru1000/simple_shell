#include "shell.h"

char readline()
{
        char *line = NULL;
        size_t size;


        if (getline(&line, &size, stdin) == -1)
	{
		free(line);
		return (NULL);
	}

	checkbuiltin(line);
	return (line);
}
