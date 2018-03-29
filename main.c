#include "shell.h"

/**
 * main - Main function
 * Description - Infinitely loops the following functions.
 *
 * Return: 0 (Success);
 */
int main(int ac __attribute__((unused)), char **av)
{
	char *line;

	while (1)
	{
		prompt();
		readline();
		parser(line);
		create_child(av);
	}

	return (0);
}
