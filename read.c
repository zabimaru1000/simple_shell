#include "shell.h"

/**
 * readline - Gets user input stores it in line, also checks built ins
 *
 * Return: line
 */
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
