#include "file.h"

/**
 * print_list - Function to call command shell ls
 * @vars: Variables
 *
 * Return: Nothing
 */
void print_list(vars_t *vars)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execv(vars->buffer, vars->array_tokens) == -1)
			perror("lsh");
	}

	else if (pid < 0)
	{
		perror("lsh");
	}
	else
	{
		wait(&status);
	}
}
