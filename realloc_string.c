#include "shell.h"

/**
 * string_realloc - insert string in ptr[a], position b
 * @ptr: array of strings, with the word to be modified
 * @a: position of word in ptr
 * @b: position of letter in word of ptr
 * @var: environmental variable
 * @len_var: length of var
 * Return: pointer to modified word
 */
char *string_realloc(char **ptr, size_t a, size_t b, char *var, size_t len_var)
{
	size_t f, len, wordlen, lenval;
	char *p = NULL;

	if (var == NULL)
		lenval = 0;
	else
		lenval = _strlen (var);
	wordlen = _strlen(ptr[a]);

	len = lenval + wordlen - len_var - 1 + 1;

	p = malloc(sizeof(char) * (len));

	for (f = 0; f < len - 1; f++)
	{
		if (f < b)
			p[f] = ptr[a][f];
		else if (f >= b && f < b + lenval)
		{
			p[f] = varr[f - b];
		}
		else
		{
			p[f] = ptr[a][f - lenval + len_var + 1];
		}
	}
	p[len - 1] = '\0';
	free(ptr[a]);
	return (p);
}
