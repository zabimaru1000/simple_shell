#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct cmd_t {
	char *string;
	void (*function)(char *line);
} builtin;
void prompt();
char *readline();
void builtincheck(char *line);
char **parser(char *);

#endif
