#include "file.h"

/**
 * check_for_builtins - Verify match of string
 * @vars: Variables
 *
 * Return: Nothing
 */
void (*check_for_builtins(vars_t *vars))(vars_t *vars)
{
	unsigned int i;
	builtins_t check[] = {
		{"1", file1},
		{"exit", exit_2},
		{"env", print_env},
		{"/bin/ls", print_list},
		{NULL, NULL}
	};

	for (i = 0; check[i].f != NULL; i++)
	{
		if (strcmp(vars->array_tokens[0], check[i].name) == 0)
			break;
	}
	if (check[i].f != NULL)
	{
		check[i].f(vars);
	}
	return (check[i].f);
}

/**
 * file1 - Test function
 * @vars: Variable
 *
 * Return: Nothing
 */
void file1(vars_t *vars)
{
	char *str = "Hola mundo";
	char *new_str;
	int counter = 0;
	int z = 0;

	(void)vars;

	while (str[counter])
		counter++;
	new_str = malloc(sizeof(char) * counter + 1);

	while (z < counter)
	{
		new_str[z] = str[z];
		z++;
	}

	printf("Hola mundo\n");
}


/**
 * exit_2 - Function to exit the program
 * @vars: Variable
 *
 * Return: Nothing
 */
void exit_2(vars_t *vars)
{
	(void)vars;
	free_shell(vars);
	exit(98);
}
