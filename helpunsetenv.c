#include "shell.h"

/**
 * helpunsetenv - prints how to unseenv built-in
 * Return: nothing
 */
void helpunsetenv(void)
{
	char *input = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

	write(STDOUT_FILENO, input, _strlen(input));
	input = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "message to stderr.\n";
	write(STDOUT_FILENO, input, _strlen(input));
}
