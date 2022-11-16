#include "shell.h"

/**
 * exit_builtin - exit of the shell
 * @inp: input
 * @buf: buffer input
 * @h_path: head path
 * @status: status exit
 * Return: success status or 5 fail
 */
ssize_t exit_builtin(char **inp, char *buf, path_l *h_path, ssize_t *status)
{
	size_t a = 0, FV;

	if (inp[1] != NULL)
	{
		while (inp[1][a] != '\0')
		{
			if (is_digit(inp[1][a]) == 1)
			{
				FV = 1;
			}
			else
			{
				*status = 2;
				return (5);
			}
			a++;
		}
		if (FV == 1)
		{
			*status = a_toi(inp[1]);
		}
	}
	if (buf)
		free(buf);
	if (inp)
	{
		for (a = 0; inp[a]; a++)
			free(inp[a]);
		free(inp);
	}
	free_list_path(h_path);
	exit(*status);
}
