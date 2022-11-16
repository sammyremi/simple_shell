#include "shell.h"

/**
 * helpcd - prints how to use cd built-in
 * Return: nothing
 */
void helpcd(void)
{
	char *input = "cd: cd [DIRECTORY]\n\tChanges the current directory of the";

	write(STDOUT_FILENO, input, _strlen(input));
	input = " process to DIRECTORY.\n\n\tIf no argument is given, the ";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "command is interpreted as cd $HOME. If the argument '-' is";
	write(STDOUT_FILENO, input, _strlen(input));
	input = " given, the command is interpreted as cd $OLDPWD. \n\n";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "\tThe environment variables PWD and OLDPWD are updated ";
	write(STDOUT_FILENO, input, _strlen(input));
	input = "after a change of directory.\n";
	write(STDOUT_FILENO, input, _strlen(input));
}
