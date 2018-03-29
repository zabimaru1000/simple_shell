#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

struct cmd_t {
	{"exit", getexit()},
	{"env", getenv()},
	{NULL, NULL};
}; get_t



void prompt();
void readline();
char **parser(char *);

#endif
