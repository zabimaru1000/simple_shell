#include "shell.h"

int count_tokens(char *line)
{
	int numtok = 0;

	strtok(line, " \n");

	while (line != NULL)
		count++;

	return (numtok);
}
