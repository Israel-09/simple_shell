#include "shell.h"
/**
 * main - start point of the program
 * Return: 0 if successful otherwise returns
 * an error value.
 */

int main(int ac, char **av)
{
	int exit_status = EXIT_SUCCESS;
	char *line, **cmd, type;
	
	while(1)
	{
		printf(">>> ");
		line = readline();
		cmd = cmd_split(line);
		type = cmd_check(cmd[0]);
		if (cmd_check(cmd[0], av[0]) == 1)
			continue;
		exit_status = execute(cmd);
	}
	return (exit_status);
}
