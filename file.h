#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

/**
 * struct variables - Struct to save arguments
 * @buffer: Argument
 * @array_tokens: Array of tokens
 *
 * Description: Is a struct for save arguments send by users.
 */
typedef struct variables
{
	char *buffer;
	char **array_tokens;
} vars_t;

/**
 * struct builtins - Struct for execute function from match
 * @name: match
 * @f: Function
 *
 * Description: Is a struct for execute a function from match
 */
typedef struct builtins
{
	char *name;
	void (*f)(vars_t *);
} builtins_t;

void (*check_for_builtins(vars_t *vars))(vars_t *vars);
char **tokenizer(char *buffer, char *delimiter);

void file1(vars_t *vars);
void file2(vars_t *vars);
void exit_2(vars_t *vars);

int _putchar(char c);
int _puts(char *s);
void print_env(vars_t *vars);
void print_list(vars_t *vars);
void free_shell(vars_t *vars);

#endif
