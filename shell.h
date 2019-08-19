#ifndef _SHELL_H_
#define _SHELL_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

typedef struct node_s
{
	char *name;
	char *val;
	struct node_s *next;
} node_t;

typedef struct shell_s
{
	char **environ;
	node_t *path_list;
	node_t *hist_list;
	char **args;
	char *rest;
} shell_t;

typedef struct builtin_sh
{
	char *name;
	char *extra;
	int (*fp)(char **args, char **env, node_t **path_list, node_t **hist_list);
} builtin_t;


int printenv(char **args, char ***env, node_t **path_list, node_t **hist_list);
unsigned int _strlen(char *s);

#endif /* SHELL_H */
