#include "holberton.h"

int main(void)
{
	pid_t pid;
	int status;
	char *line = NULL;
	size_t size = 0;
	size_t index = 0;
	char *argv[2];

	printf("$ ");
	index = getline(&line, &size, stdin);
	strtok(line, "\n");
	printf("value of index = %lu\n", index);

	argv[0] = line;
	argv[1] = NULL;
	printf("line: %s\n", line);
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return(1);
	}
	if (pid == 0)
	{
		printf("executing command %s\n", line);
		execve(line, argv, NULL);
	}
	else
	{
		printf("Inside parent, waiting for child\n");
		wait(&status);
		printf("$ ");
	}
	return (0);
}
