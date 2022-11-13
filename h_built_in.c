#include "shell.h"

/**
 * help_builtin - info of the built-in
 * @inp: argument
 * Return: success 0 or 3 fail
 */
ssize_t help_builtin(char **inp)
{
	if (inp[1] != NULL)
	{
		if (_strcmp(inp[1], "env") == 0)
		{
			helpenv();
			return (0);
		}
		else if (_strcmp(inp[1], "exit") == 0)
		{
			helpexit();
			return (0);
		}
		else if (_strcmp(inp[1], "help") == 0)
		{
			helphelp();
			return (0);
		}
		else if (_strcmp(inp[1], "setenv") == 0)
		{
			helpsetenv();
			return (0);
		}
		else if (_strcmp(inp[1], "unsetenv") == 0)
		{
			helpunsetenv();
			return (0);
		}
		else if (_strcmp(inp[1], "cd") == 0)
		{
			helpcd();
			return (0);
		}
		else
			return (3);
	}
	else
	{
		help();
		return (0);
	}
}
