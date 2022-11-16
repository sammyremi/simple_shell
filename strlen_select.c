#include "shell.h"

/**
 * select_strlen - counts char until the select char is found
 * @str: pointer to string to be count
 * @ch: select char
 * Return: number of char count
 */
int select_strlen(char *str, char ch)
{
	int v;
	char selc = ch;

	if (ch == ' ')
		selc = 9;
	for (v = 0; str[v] != '\0' && str[v] != ch && str[v] != selc
			&& str[v] != '\n'; v++)
	{

	}
	return (v);
}
