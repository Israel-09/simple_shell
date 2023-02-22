#ifndef SHELL_H
#define SHELL_H

/*c standard header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

/*global variables*/
extern char *const *environ;
#define DELIM " \n\b\r\a"
#define INCOMMAND 1
#define OUTCOMMAND 2
#define PCOMMAND 3
#define INVALID 0

/*local functions variables*/
char **cmd_split(char *command);
int execute(char **argv);
char *readline();
int cmd_check(char *cmd, char *av);

#endif
