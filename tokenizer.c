#include "file.h"

/**
 * tokenizer - Function to separate string by delimiter
 * @buffer: String
 * @delimiter: Delimiter
 *
 * Return: Array of strings
 */
char **tokenizer(char *buffer, char *delimiter)
{
	char **tokens = NULL;
	char *token;
	size_t i = 0;
	unsigned int mcount = 10;

	if (*buffer == '\n' || *buffer == ' ')
		return (NULL);

	if (buffer == NULL)
		return (NULL);
	tokens = malloc(sizeof(char *) * mcount);
	if (tokens == NULL)
	{
		return (NULL);
	}

	token = strtok(buffer, delimiter);
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " ");
		i++;
		if (i == mcount)
		{
			tokens = realloc(tokens, mcount);
			if (tokens == NULL)
			{
				return (NULL);
			}
		}
	}

	return (tokens);
}
