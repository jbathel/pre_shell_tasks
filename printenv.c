#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "shell.h"

unsigned int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	for (length = 0; s[length]; length++)
		;
	return (length);
}

/**
 * printenv - prints the environment using the global variable environ          * @args: arguments                                                             * @env: environment linked list                                                * @path1: path                                                                 * @hist1: history of linked lists                                             
 * Return: 0 on success, -1 otherwise
 */
int printenv(char **args, char ***env, node_t **path_1ist, node_t **hist_1ist)
{
	int i = 0;
	char **environ;
	(void) args;

	environ = *env;
	if (!environ)
		return (-1);
	while (environ[i])
	{
		write(STDOUT_FILENO,environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO,"\n", 1);
		++i;
	}
	return (0);
}
