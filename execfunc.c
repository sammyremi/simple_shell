#include "shell.h"

/**
 * func_exec - executes function
 * @exec: executable with path
 * @inp: array of arguments
 * @flag: flag to free exec if 1
 * Return: exit status
 */
int func_exec(char *exec, char **inp, ssize_t flag)
{
	int status;
	ssize_t fam;
	int h = 0;

	fam = fork();
	if (fam == 0)
		execve(exec, inp, environ);

	wait(&status);
	h = WEXITSTATUS(status);

	if (flag == 1)
		free(exec);
	return (h);
}
