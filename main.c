#include "shell.h"
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: Pointer to array of string pointers
 * Return: 0 (Success), -1 (Failure)
 */
int main(int argc, char *argv[])
{
	char *line; /* buffer the shell uses to read the input from stdin */
        char **token_array;
	void(argc);

	while (1)
        {
                prompt();
                line = readline(); /* calls get line */
		if (line == NULL)
			return (-1);
        }
	token_array = parse_line(line);
	if (token_array == NULL)
		return (-1);
	run_cmd(token_array);
        return (0);
}
