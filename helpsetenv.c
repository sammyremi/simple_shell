#include "shell.h"

/**
 * helpsetenv - prints how to use setenv built-in
 * Return: nothing
 */
void helpsetenv(void)
{
	char *input = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

	write(STDOUT_FILENO, input, _strlen(input));
	input = "environment variable, or modifies an existing one.\n\n";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, input, _strlen(input));
}
