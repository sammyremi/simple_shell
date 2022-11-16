#include "shell.h"

/**
 * a_toi - converts a string to an int
 * @c: element of the string
 * Return: an integer or zero
 */
unsigned int a_toi(char *c)
{
	int a;
	unsigned int ptr;
	int sign;

	a = 0;
	ptr = 0;
	sign = 0;
	while (c[a] > '9' || c[a] < '0')
	{
		if (c[a] == '-')
		{
			sign++;
		}
		a++;
	}
	while (c[a] >= '0' && c[a] <= '9')
	{
		ptr = ptr * 10 + (c[a] - '0');
		a++;
	}
	if (sign % 2 != 0)
	{
		ptr = -1 * ptr;
		return (ptr);
	}
	if (ptr == 0)
		return (0);
	return (0);
}
