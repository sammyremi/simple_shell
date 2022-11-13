#include "shell.h"

/**
 * help - prints how to use help built-in
 * Return: nothing
 */
void help(void)
{
	char *input = "hsh\nThese shell commands are defined internally.\n";

	write(STDOUT_FILENO, input, _strlen(input));
	input = "Type 'help' to see this list.\nType 'help name' to find ";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "out more about the function 'name'.\n\n cd	\tcd ";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "[DIRECTORY]\n exit	\texit [STATUS]\n env	\tenv";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "\n setenv	\tsetenv [VARIABLE] [VALUE]\n unsetenv\t";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "unsetenv [VARIABLE]\n";
	write(STDOUT_FILENO, input, _strlen(input));
}
