#include "shell.h"
/**
 * parse_line - parses and tokenizes a string
 * Description: This function analyzes a string,
 * tokenizes it in separate strings,
 * and creates a pointer to an array of said strings
 * @line: buffer to parse
 * Return: tokenized buffer, or NULL if failed
 */
char **parse_line(char *line)
{
	int count, i;
	char *token = NULL;
	char *copy = NULL;
	char **token_array;

	copy = _strdup(line); /* copy the string */
	if (copy == NULL) /* if strdup failed */
	{
		free(line);
		return (NULL);
	}
	token = strtok(copy, DELIM); /* tokenize the first argument */
	for (count = 0; token != NULL; count++)
		token = strtok(NULL, DELIM); /* tokenize each arguement until null byte */
	free(copy); /* don't need copy anymore */
	count++;
	token_array = malloc(sizeof(char *) * (count));
	if (token_array == NULL)
	{
		free(line);
		return (NULL);
	}
	token = NULL; /* reset token */
	token = strtok(line, DELIM);
	for (i = 0; token != NULL; i++)
	{
		token_array[i] = token;
		token = strtok(NULL, DELIM);
	}
	token_array[i] = NULL; /* null terminate list of tokens */
	return (token_array);
}
