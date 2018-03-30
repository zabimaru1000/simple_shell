#include "shell.h"
/**
 * readline - reads line from input and stores it in a buffer
 * Return: the buffer or NULL if failed
 */
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

	return (line);
}
