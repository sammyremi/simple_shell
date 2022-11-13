#include "shell.h"

/**
 * helphelp - prints how to use help built-in
 * Return: nothing
 */
void helphelp(void)
{
	char *input = "help: help\n\tSee all possible Shell by built-in commans.\n";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "\n	help [BUILTIN NAME]\n\tSee specific information on each ";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "builtin command.\n";
	write(STDOUT_FILENO, input, _strlen(input));
}
