#include "shell.h"

/**
 * create_child - Creates a child process to execute binary.
 * @av: Char double pointer to arguments.
 * Return: 1 on success, goes back to prompt.
 */
int create_child(char **av)
{
	pid_t pid, child_succ;
	char **envp = NULL;
	int check;

	pid = fork(); // create child process

	if (pid == 0) //child process returns 0
	{
		if ((execve(av[0], av[1], envp) == -1))
		{
			perror("Binary failed\n");
			exit(1);
		}

		else if (pid == -1)
		{
			perror("Fork failed\n");
			exit(1);
		}

		else
			//If true, loop when not killed/exited
			while (!WIFEXITED(check) && !WIFSIGNALED(check))
			{
				//3rd option return if child stopped.
				child_succ = wait(pid, &status, WUNTRACED);
			}
	}

	return (1) // go back to prompt();
}
