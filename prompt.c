#include "shell.h"

/**
 * prompt - Prints the prompt to indicate user input
 *
 */
void prompt(void)
{
	char *show_prompt = "bkash$ ";
	int len = strlen(show_prompt);

	write(STDOUT_FILENO, show_prompt, len);
}
