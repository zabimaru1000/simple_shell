#include "shell.h"
/**
 * get_exit - terminates a shell process
 * @line: pointer to string to free before exit
 */
void get_exit(char *line)
{
	free(line);
	exit(1);
}
/**
 * get_env - prints
 * @line: pointer to string to free before exit
 */
void get_env(char *line)
{
	int i = 0;
	int len;

	while (environ[i] != NULL)
	{
		len = _strlen(environ[i]);
		write(1, environ[i], len);
		write(1, "\n", 1);
		i++;
	}
	free(line); /* should this be freed only if write fails? */
}
