#include "shell.h"

/**
 * check_builtin - checks the built-in
 * @inp: input user
 * @buf: buffer input
 * @link_path: PATH
 * @status: status exit
 * Return: flag
 */
ssize_t check_builtin(char **inp, char *buf, path_l *link_path, ssize_t *status)
{
	ssize_t flag = 10;

	if (_strcmp(inp[0], "exit") == 0)
	{
		flag = exit_builtin(inp, buf, link_path, status);
	}
	if (_strcmp(inp[0], "env") == 0)
	{
		flag = printenv();
	}
	if (_strcmp(inp[0], "help") == 0)
	{
		flag = help_builtin(inp);
	}
	if (_strcmp(inp[0], "setenv") == 0)
	{
		flag = setenv_builtin(inp, status);
	}
	if (_strcmp(inp[0], "unsetenv") == 0)
	{
		flag = unsetenv_builtin(inp, status);
	}
	if (_strcmp(inp[0], "cd") == 0)
	{
		flag = cd_builtin(inp, status);
	}
	return (flag);
}
