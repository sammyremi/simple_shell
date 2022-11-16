#include "shell.h"

/**
 * get_env - get  environment variable
 * @buf: name of the variable
 * Return: pointer to location of variable
 */
char *get_env(const char *buf)
{
	int len, flag, a, b;

	len = _strlen(buf);

	for (a = 0; environ[a] != NULL; a++)
	{
		for (b = 0; b < len; b++)
		{
			if (buf[b] == environ[a][b])
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1 && environ[a][b] == '=')
			return (&environ[a][b + 1]);
	}
	return (NULL);
}
