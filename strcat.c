#include "shell.h"

/**
 * str_cat - concatenates two strings in a newly allocate space
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a newly allocated space
 */
char *str_cat(char *s1, char *s2)
{
	int a, b, c;
	char *p NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
	}
	p = malloc((sizeof(char) * (a + c)) + 1);

	if (p == NULL)
		return (NULL);

	for (b = 0; b < (a + c); b++)
	{
		if (b < a)
			p[b] = s1[b];
		else
			p[b] = s2[b - a];
	}
	p[a + c] = '\0';

	return (p);
}

