#include "shell.h"

/**
 * is_digit - check if a character is a number
 * @s: char to be checked
 * Return: 1 if letter, 0 if not
 */
int is_digit(char s)
{
	if (s >= 48 && s <= 57)
	{
		return (1);
	}
	return (0);
}
