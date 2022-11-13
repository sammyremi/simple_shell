#include "shell.h"

/**
 * printenv - built-in print env
 * Return: nothing
 */
ssize_t printenv(void)
{
	ssize_t a = 0;
	char n_line = '\n';

	while (environ[a])
	{
		write(STDOUT_FILENO, environ[a], _strlen(environ[a]));
		write(STDOUT_FILENO, &n_line, );
		a++;
	}
	return (0);
}
