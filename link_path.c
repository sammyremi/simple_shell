#include "shell.h"

/**
 * _linkedpath - creates a linked list of the path
 * Return: pointer to linked list
 */
path_l *_linkedpath(void)
{
	char select = ':';
	char *path = NULL;
	int num_p, len_d, a, b;
	char *f = NULL;
	path_l *head = NULL;

	path = get_env("PATH");
	if (path == NULL)
		path = "";
	num_p = wordcount(path, select);
	
	for (a = 0; a < num_p || path[0] == ':'; a++)
	{
		if (path[0] == ':')
		{
			f = malloc(sizeof(char) * (1 + 1 + 1));
			f[0] = '.';
			f[1] = '/';
			f[2] = '\0';
			add_node_end(&head, f);
			path = path + 1;
			num_p++;
		}
		else
		{
			len_d = select_strlen(path, select);

			f = malloc(sizeof(char) * (len_d + 1 + 1));
			for (b = 0; b < len_d; b++)
				f[b] = path[b];
			f[b] = '/';
			f[b + 1] = '\0';
			add_node_end(&head, f);
			path = path + len_d;
			if (path[0] == ':' && a + 1 < num_p)
				path = path + 1;
		}
	}
	return (head);
}
