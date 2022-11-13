#include "shell.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: string
 * @o_size: is the size, in bytes, of the allocated space for ptr
 * @n_size: is the new size
 * Return: ()
 */
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size)
{
	char *new_p;
	unsigned int a;

	if (n_size == o_size)
		return (ptr);
	if ((n_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	new_p = malloc(n_size);
	if (new_p == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (a = 0; (a < o_size) && (a < n_size); a++)
			new_p[a] = ((char *) ptr)[a];
		free(ptr);
	}
	return (new_p);
}
