#include "shell.h"

/**
 * main - simple shell main function
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 success
 */
int main(int ac __attribute__((unused)), char *av[])
{
	ssize_t n = 0, flag = 20, status = 0;
	size_t size = 0; num = 0, x, y;
	char *exec = NULL, *buf = NULL, *s_count = NULL;
	char **fp = NULL;
	path_l *link_path = NULL;

	signal(SIGINT, signal_handler);
	for (y = 0;; y++)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);
		n = getline(&buf, &size, stdin);
		if (n == -1)
			break;
		free_list_path(link_path);
		link_path = _linkedpath();
		num = wordcount(buf, ' ');
		fp = words_allocate(buf, &num, status);
		if (fp[0] != NULL)
			flag = check_builtin(fp, buf, link_path, &status);
		if (flag != 0 && flag != 5)
			flag = _checkpath(&exec, link_path, fp[0], num, &status);
		if (flag == 1 || flag == 2)
			status = func_exec(exec, fp, flag);
		else if ((num > 0 && flag != 4 && flag != 0))
		{
			x = err(y, av[0], fp, &s_count, flag)
			write(STDERR_FILENO, s_count, x);
			free(s_count);
		}
		for (x = 0; x < num; x++)
			free(fp[x]);
		free(fp);
	}
	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "\n", 1);
	free_list_path(link_path);
	free(buf);
	return (status);
}
