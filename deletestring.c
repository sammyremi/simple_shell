#include "shell.h"

/**
 * string_del - deletes a word from an array of arrays
 * @ptr: array of strings with the word to be modified
 * @a: position of word in ptr
 * @num: number of words
 * Return: Null
 */
char *string_del(char **ptr, size_t a, size_t *num)
{
	size_t f, g, str_len;
	char *p NULL;

	for (f = a; ptr[f + 1] != NULL; f++)
	{
		str_len = _strlen(ptr[f + 1]);
		p = malloc(sizeof(char) * str_len + 1);
		for (g = 0; g < str_len; g++)
		{
			p[g] = ptr[f + 1][g];
		}
		p[g] = '\0';
		free(ptr[f]);
		ptr[f] = p;
	}
	free(ptr[f]);
	*num = f;
	return (NULL);
}
