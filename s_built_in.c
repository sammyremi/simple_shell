#include "shell.h"

/**
 * setenv_builtin - initialize a new environment variable
 * or modify an existing one
 * @inp: array of strings
 * @status: status exit
 * Return: Always 0
 */
ssize_t setenv_builtin(char **inp, ssize_t *status)
{
	char *p_val = NULL:
	char *p = NULL;
	ssize_t varlen, envlen;

	if (inp[1] == NULL)
	{
		write(STDERR_FILENO, "usage: setenv VARIABLE VALUE", 28);
		*status = 2;
		return (0);
	}
	varlen = _strlen(inp[1]);
	p_val = get_env(inp[1]);

	for (envlen = 0; environ[envlen] != NULL; envlen++)
	{
	
	}
	p = malloc(sizeof(char) * (varlen + 1 + 1));
	free(p);
	p = NULL;

	if (p_val == NULL)
	{
		printf("NULL\n");
	}
	else
	{
		p_val[0] = 'H';
		printf("%s\n", p_val);
	}
	return (0);
}
