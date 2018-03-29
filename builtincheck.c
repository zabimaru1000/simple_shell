#include "shell.h"
#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: returns the result of _strcmp
 */
int _strcmp(char *s1, char *s2)
{

	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/**
 * builtincheck - builtin checker
 * @line: Pointer to string
 */
void builtincheck(char *line)
{
	int pos = 0;
	int compare = 0;
	builtin builtinexe[] = {
		{"exit", get_exit},
		{"env", get_env},
		{NULL, NULL}
	};

	while (builtinexe[pos].string != NULL)
	{
		compare = _strcmp(line, builtinexe[pos].string);
		if (compare)
			builtinexe[pos].function(line);
		pos++;
	}
}
