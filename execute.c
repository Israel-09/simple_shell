#include "shell.h"

int cmd_type(char *argv)
{
	int i
	char **builtin = {
		"exit",
		"env",
	};

	if (argc[0] == '/')
return (EX
}
int cmd_check(char *cmd, char *av)
{
	struct stat stats;

	if (stat(cmd, &stats) != 0)
	{
		printf("%s: No such file or directory\n", av);
		return 1;
	}
	return (0);
}

/**
 * process - starts the execution of the program
 *

/**
 * execute - executes the command passed by the user
 * @argv: array of command generated by the user
 * Return: nothing if the command is succesful
 */
int execute(char **argv)
{
	pid_t pid;
	int status;
	int success;
	
	pid = fork();
	if (pid < 0)
	{
		perror("Fork failed");
		return (EXIT_FAILURE);
	}
	
	else if (pid == 0)
	{
		success = execve(argv[0], argv , environ);
		if (success < 0)
		{
			return (EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, &status, WUNTRACED);
		return(EXIT_SUCCESS);
	}
	return (EXIT_SUCCESS);
}
