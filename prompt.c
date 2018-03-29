#include "shell.h"

/**
 * prompt - prints prompt
 */
void prompt(void)
{
	char *prompt = "bkash$ ";
	int len = _strlen(prompt);

	if (write(STDOUT_FILENO, prompt, len) == -1)
	{
		perror("prompt");
		return;
	}
}
