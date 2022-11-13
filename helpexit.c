#include "shell.h"

/**
 * helpexit - print how to use exit built-in
 * Return: nothing
 */
void helpexit(void)
{
	char *input = "exit: exit [STATUS]\n\tExits the shell.\n\n\tThe ";

	write(STDOUT_FILENO, input, _strlen(input));
	input = "STATUS argument is the integer used to exit the shell.";
	write(STDOUT_FILENO, input, _strlen(input));
	input = " If no argument is given, the command is interpreted as";
	write(STDOUT_FILENO, input, _strlen(input));
	input = " exit 0.\n";
	write(STDOUT_FILENO, input, _strlen(input));
}
