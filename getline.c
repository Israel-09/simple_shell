#include "shell.h"

char *readline()
{
	size_t size = 0;
	char *line = NULL;
	ssize_t char_read;

	char_read = getline(&line, &size, stdin);
	if (char_read < 0)
	{
		free(line);
		return (NULL);
	}
	line[char_read - 1] = '\0';
	return (line);	

}
