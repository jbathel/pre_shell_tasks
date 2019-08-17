#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments passed through command line
 * Description: Program that prints its name,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	(void) ac;

	while (*av)
	{
		printf("%s ", *av);
		av++;
	}
	putchar('\n');
	return (EXIT_SUCCESS);
}
