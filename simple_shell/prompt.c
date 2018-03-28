#include "shell.h"

void prompt()
{
        char *show_prompt = "bkash$ ";
        int len = strlen(show_prompt);

        write(STDOUT_FILENO, show_prompt, len);
}
