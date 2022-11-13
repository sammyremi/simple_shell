#include "shell.h"

/**
 * wordcheck - checks if the words have special characters
 * @ptr: array of strings to be checked
 * @num: number of words
 * @status: status of last command
 * Return: array of change words if special character occurs
 */
 char **wordcheck(char **ptr, size_t *num, size_t status)
{
	size_t a, b, c, end;
	char *var = NULL;
	char *p = NULL;
	int len_var;

	for (a = 0; a < num; a++)
	{
		if (ptr[a][0] == '#')
		{
			for (c = a; c < *num; c++)
			{
				free(ptr[c];
				ptr[c] = NULL;
			}
			*num = a;
			return (ptr);
		}
		for (b = 0; ptr[a] != NULL && ptr[a][b] != '\0'; b++)
		{
			if (ptr[a][b] == '$' && ptr[a][b + 1] == '$')
			{
				end = getpid();
				ptr[a] = realloc_specialnum(end, ptr, a, b);
			}
			else if (ptr[a][b] == '$' && ptr[a][b + 1] == '?')
				ptr[a] = realloc_specialnum(status, ptr, a, b);
			else if (ptr[a][b] == '$' && (is_alpha(ptr[a][b + 1]) == 1 || ptr[a][b + 1] == '_'))
			{
				for (len_var = 0; is_alpha(ptr[a][b + len_var + 1]) == 1 || ptr[a][b + len_var + 1] == '_' || is_digit(ptr[a][b + len_var + 1]); len_var++)
				{
				
				}
				p = malloc(sizeof(char) * (len_var + 1));
				for (c = b + 1; c < len_var + b + 1; c++)
				{
					p[c - b - 1] = ptr[a][c];
				}
				p[len_var] = '\0';
				var = get_env(p);
				free(p);
				p = NULL;

				if (var != NULL)
					ptr[a] = string_realloc(ptr, a, b, var, len_var);
				else
				{
					ptr[*num - 1] = string_del(ptr, a, num);
					if (a > 0)
						a--;
			}
			}
		}
	}
	return (ptr);
}
