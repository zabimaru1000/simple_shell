#include "shell.h"
/**
 * prompt - prints the shell prompt
 * Description: name of shell is the authors initials
 */
void prompt(void)
{
	char *show_prompt = "bkash$ ";
	int len = strlen(show_prompt);

	if (write(STDOUT_FILENO, show_prompt, len) == -1)
	{
		perror("prompt");
		return (NULL);
	}
}
