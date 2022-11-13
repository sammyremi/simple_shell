#include "shell.h"

/**
 * helpenv - print how to use env built-in
 * Return: nothing
 */
void helpenv(void)
{
	char *input = "env: env\n\tPrints the current environment.\n";

	write(STDOUT_FILENO, input, _strlen(input));
}
