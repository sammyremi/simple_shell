#include "shell.h"

/**
 * realloc_specialnum - insert number in ptr[a], position b
 * @num: number to be inserted
 * @ptr: array of strings, with the word to be modify
 * @a: position of word in ptr
 * @b: position of letter in word of ptr
 * Return: pointer to modified word
 */
char *realloc_specialnum(size_t num, char **ptr, size_t a, size_t b)
{
	size_t tmp = num, numlen, wordlen, len, w;
	char *p = NULL;

	for (numlen = 1; tmp / 10 != 0; numlen++)
		tmp = tmp / 10;
	wordlen = _strlen(ptr[a]);
	len = wordlen - 2 + numlen + 1;

	p = malloc(sizeof(char) * (len));
	for (w = 0; w < len; w++)
	{
		if (w < b)
			p[w] = ptr[a][w];
		else if (w == b)
			w = printnum(num, p, w);
		else
		{
			p[w - 1] = ptr[a][w - numlen + 1];
		}
	}
	p[len - 1] = '\0';
	free(ptr[a]);
	return (p);
}
