#include "file.h"

/**
 * free_shell - Function to free memory
 * @vars: Argument
 * Return: Nothing
 */
void free_shell(vars_t *vars)
{
	int i;
	
	i = 0;
	if (vars)
	{
		free(vars->buffer);
		while(vars->array_tokens)
		{
			free(vars->array_tokens[i]);
			i++;
		}
		free(vars);
	}
}
