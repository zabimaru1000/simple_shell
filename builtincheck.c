#include "shell.h"
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
