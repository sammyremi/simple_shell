#include "shell.h"

/**
 * words_allocate - creates an array of words
 * @inp: string with words for array
 * @num: number of words in input
 * @status: status of last command
 * Return: pointer to array of words
 */
char **words_allocate(char *inp, size_t *num, size_t status)
{
	char **ptr = NULL;
	char *p = NULL;
	size_t len = 0, a, b;

	ptr = malloc(sizeof(char *) * (*num + 1));
	if (ptr == NULL)
		return (NULL);

	p = &inp[0];
	for (a = 0; a < *num; a++)
	{
		while (p[0] == ' ' || p[0] == 9)
			p++;

		len = select_strlen(p, ' ');

		ptr[a] = malloc(sizeof(char) * (len + 1));

		if (ptr[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(ptr[b]);
			free(ptr);
		}
		for (b = 0; b < len; b++)
			ptr[a][b] = p[b];
		ptr[a][b] = '\0';

		p = p + b;
	}
	ptr[*num] = NULL;
	ptr = wordcheck(ptr, num, status);

	return (ptr);
}

