#include "shell.h"

char *readline()
{
        char *line = NULL;
        size_t size;


        if (getline(&line, &size, stdin) == -1)
	{
		write(1, "\n", 1);
		free(line);
		return (NULL);
	}
	builtincheck(line);
	return (line);
}
