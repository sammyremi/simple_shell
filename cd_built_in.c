#include "shell.h"

/**
 * cd_builtin - change director
 * @inp: array of strings
 * @status: status exit
 * Return: Always 0
 */
ssize_t cd_builtin(char **inp, ssize_t *status)
{
	if (inp[1] == NULL)
	{
		write(STDERR_FILENO, "usage: cd [DIRECTORY]", 28);
		*status = 2;
		return (0);
	}
	return (0);
}
