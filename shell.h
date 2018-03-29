#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct cmd_t - structure for builtins
 * @string: string to compare
 * @function: pointer to builtin function
 */
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
char **parser(char *);
#endif
