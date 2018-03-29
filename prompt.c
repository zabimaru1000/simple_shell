#include "shell.h"

void prompt()
{
        char *show_prompt = "bkash$ ";
        int len = strlen(show_prompt);

        if (write(STDOUT_FILENO, show_prompt, len) == -1)
	{
		perror("prompt");
		return (NULL);
	}
}
