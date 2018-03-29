#include "shell.h"
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: Pointer to array of string pointers
 * Return: 0 (Success), -1 (Failure)
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	char *line;
	char **token_array;

	while (1)
        {
                prompt();

                line = readline(); /* calls get line */

		if (line == NULL)
		{
			continue;
		}

		token_array = parse_line(line);

		if (argv == NULL)
		{
			continue;
		}

		run_cmd(token_array);
	}
        return (0);
}
