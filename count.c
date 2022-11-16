#include "shell.h"

/**
 * wordcount - counts words until a ch char is found
 * @inp: pointer to the string to be counted
 * @ch: the selected char
 * Return: number of words
 */
size_t wordcount(char *inp, char ch)
{
	ssize_t g;
	size_t num = 0;
	char str = ch;

	if (ch == ' ')
		str = 9;

	if (inp[0] == '\n')
		return (0);
	else if (inp[0] != ch && inp[0] != 9)
		num++;

	for (g = 1; inp[g] != '\0'; g++)
	{
		if (inp[g] == '\n' && inp[g + 1] == '\0')
			break;
		if ((inp[g - 1] == ch && inp[g] != ch)
				|| (inp[g - 1] == str && inp[g] != str))
			num++;
	}
return (num);
}
