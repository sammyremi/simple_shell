#include "shell.h"

/**
 * err - saves in buffer error message to be printed
 * @h: line of shell
 * @av: argument zero of argv
 * @inp: input of user
 * @s_count: buffer where text will be saved)
 * @flag: if flag is 3 denied if else not found
 * Return: length of text
 */
size_t err(size_t h, char *av, char **inp, char **s_count, int flag)
{
	size_t sum, s, n, mes_len, inp_len;
	size_t num_len, arg_len, tmp;
	char nfound[] = ": not found\n";
	char denied[] = ": Permission denied\n";

	tmp = h;
	arg_len = _strlen(av);
	for (num_len = 1; (tmp + 1) / 10 != 0; num_len++)
		tmp = tmp / 10;
	inp_len = _strlen(inp[0]);
	if (flag == 3)
		mes_len = 20;
	else
		mes_len = 12;

	sum = arg_len + 2 + num_len + 2 + inp_len + mes_len;
	*s_count = malloc(sizeof(char) * sum);

	for (s = 0; s < arg_len; s++)
		s_count[0][s] = av[s];
	s_count[0][s++] = ':';
	s_count[0][s++] = ' ';

	s = printnum(h + 1, s_count[0], s);
	s_count[0][s++] = ':';
	s_count[0][s++] = ' ';

	for (n = 0; inp[0][n] != '\0'; n++, s++)
		s_count[0][s] = inp[0][n];

	if (flag == 3)
		for (n = 0; denied[n] != '\0'; n++, s++)
			s_count[0][s] = denied[n];
	else
		for (n = 0; nfound[n] != '\0'; n++, s++)
			s_count[0][s] = nfound[n];
	return (s);
}
