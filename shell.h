#ifndef SHELL_H
#define SHELL_H
#define DELIM " \t\n"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
/**
 * struct cmd_t - structure for builtins
 * @string: string to compare
 * @function: pointer to builtin function
 */
extern char **environ;
typedef struct cmd_t
{
	char *string;
	void (*function)(char *line);
} builtin;
void prompt(void);
char *readline();
void builtincheck(char *line);
void get_exit(char *line);
void get_env(char *line);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char **parse_line(char *line);
int run_cmd(char **token_array);
#endif
