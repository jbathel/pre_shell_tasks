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
int _strlen(const char *s);
extern char **environ;
int _setenv(const char *name, const char *value, int overwrite);
char *_getenv(const char *name, char **env);
int _unsetenv(const char *name);

char *_memcpy(char *dest, const char *src, unsigned int n);
int _strncmp(char *s1, char *s2, size_t bytes);
int char_check(char *s, const char *in);

#endif /* SHELL_H */
