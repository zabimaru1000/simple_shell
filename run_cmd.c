#include "shell.h"

int run_cmd(char **token_array)
{
	int check;
	pid_t pid;

	pid = fork();

        if (pid == -1) /* if fork failed */
	{
                perror("Fork failed");
		return (-1);
        }

	else if (pid == 0)
	{
		if ((execve(token_array[0], token_array, NULL) == -1))
		{
			perror("run_cmd");
		}
	}

	else
	{
		do {
			/* 3rd option return if child stopped. */
			pid = waitpid(pid, &check, WUNTRACED);
		} while(!WIFEXITED(check) && !WIFSIGNALED(check));
	}
	return (1);
}
