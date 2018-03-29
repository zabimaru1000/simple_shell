int run_cmd(char **aray)
{
	int status;
	pid_t pid;

	pid = fork();
	if (child_pid == -1) /* if fork failed */
	{
		perror("run_cmd");
		return (-1);
	}
	if (pid == 0) /* if child */
	{
		execve(array[0], array, NULL);
	}
	else /* if parent */
		wait(&status);
	return (0);
}
