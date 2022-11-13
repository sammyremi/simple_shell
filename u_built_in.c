#include "shell.h"

/**
 * unsetenv_builtin - removes an environmental
 * @inp: array of strings
 * @status: status exit
 * Return: Always 0
 */
ssize_t unsetenv_builtin(char **inp, ssize_t *status)
{
	if (inp[1] == NULL)
	{
		write(STDERR_FILENO, "usage: unsetenv VARIABLE VALUE", 30);
		*status = 2;
		return (0);
	}
	return (0);
}
