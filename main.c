#include "file.h"

/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: List of arguments
 * @envp: List of enviroments
 * Return: 0
 */
int main(int argc, char **argv, char *envp[])
{
	vars_t vars = {NULL, NULL};
	size_t len_buffer = 0;
	int i;

	(void)argc;
	(void)argv;

	_puts("$ ");

	while ((getline(&(vars.buffer), &len_buffer, stdin)) != -1)
	{

		if (!strcmp(vars.buffer, "env\n"))
		{
			for (i = 0 ; envp[i] ; i++)
			{
				_puts(envp[i]);
				_putchar('\n');
			}
		}

		vars.array_tokens = tokenizer(vars.buffer, " \n");
		if (vars.array_tokens == NULL)
		{
			_puts("$ ");
			continue;
		}

		if (check_for_builtins(&vars) == NULL)
		{
			_puts("No encontrado ");
			_puts(vars.array_tokens[0]);
			_putchar('\n');
		}
		free_shell(&vars);
		_puts("$ ");
	}
	_putchar('\n');
	exit(0);
}
