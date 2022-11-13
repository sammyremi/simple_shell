#include "shell.h"

/**
 * is_alpha - checks if a character is a letter
 * @s: char to be check
 * Return: 1 if letter, 0 if not
 */
int is_alpha(char s)
{
	int a;
	char alphab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (a = 0; alphab[a] != '\0'; a++)
	{
		if (alphab[a] == s)
			return (1);
	}
	return (0);
}
