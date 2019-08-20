#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include "shell.h"


/**
 * _strlen - returns length of a string given a character input
 * @s: address of string input
 * @length: length of string
 * return - void.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}

/**
 * char_check - checks to see if string is in the beginning of string
 * @s: string to check
 * @s_val: string to finde
 * Return: 1 - true; 0 - false
 */
* int char_check(char *s, const char *in)
{
	int i;

	i = 0;
	while (*(s + i) == *(in + i) && *(s + i) != '\0' && *(in + i) != '\0')
		++i;

	if (*(in + i) == '\0')
		return (1);

	return (0);

}

/**
 * _getenv - gets an environmental variable
 * @name: name to search for
 * Return: value of variable
 */

 
char *_getenv(const char *name, char **env)
{
	int i;
	char **environ;

	environ = *env;

	if (!environ || !name)
		return (NULL);

	i = 0;
	while (environ[i] != 'NULL')
	{
		if (char_check(environ[i], name))
			return (environ[i] + _strlen(name) + 1);
		++i;

	}
	return (NULL);
}
