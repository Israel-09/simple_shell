#include "shell.h"

char **cmd_split(char *command)
{
	char *token;
	int i = 0;
	char **args = malloc(sizeof(char *) * 64);
	token = strtok(command, DELIM);
	while (token)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, DELIM);
	}
	args[i] = NULL;
	return (args);
}
