#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

struct arg_t {
        char *arg_name;
        int ac;
        char *av[64];
};

void prompt();
void readline();
char **parser(char *);

#endif
