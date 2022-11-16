#include "shell.h"

/**
 * _checkpath - check if path + input is executable
 * @exec: path + input
 * @h: head of list of path
 * @inp: input user (first word)
 * @num: number of words
 * @status: status of last command
 * Return: 0 - not found
 *	1 - path + input is executable -> free in func_exec
 *	2 - input is executable
 *	3 - path + input || input exists but not executable
 *	4 - do nothing
 */
int _checkpath(char **exec, path_l *h, char *inp, size_t num, ssize_t *status)
{
	size_t a;
	struct stat sta;

	if (num == 0)
		return (0);
	if (_strcmp(inp, ".") == 0)
	{
		*status = 127;
		return (4);
	}
	else if (_strcmp(inp, "..") == 0)
	{
		*status = 127;
		return (3);
	}
	for (a = 0; h != NULL && inp[0] != '/'; a++)
	{
		*exec = str_cat(h->d_path, inp);
		if (stat(*exec, &sta) == 0 && sta.st_mode & S_IXUSR)
			return (1);
		else if (stat(*exec, &sta) == 0)
		{
			*status = 126;
			free(*exec);
			return (3);
		}
		h = h->link;
		free(*exec);
	}
	*exec = inp;
	if (stat(inp, &sta) == 0 && sta.st_mode & S_IXUSR
			&& (inp[0] == '/' || inp[0] == '.'))
		return (2);
	else if (stat(*exec, &sta) == 0 && (inp[0] == '/' || inp[0] == '.'))
	{
		*status = 126;
		return (3);
	}
	*status = 127;
	return (20);
}
