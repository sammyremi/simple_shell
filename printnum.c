#include "shell.h"

/**
 * printnum - saves in buf numbers to be printed
 * @num: number to be printed
 * @buf: buffer where numbers are going to be saved
 * @count position of the buffer
 * Return: new position of the buf
 */
size_t printnum(size_t num, char *buf, size_t count)
{
	ssize_t s, t, u = 1;
	size_t f;

	f = num;
	for (s = 0; num / 10 != 0; s++)
		num = num / 10;
	for (t = 0; t <= s - 1; t++)
		u = u * 10;
	for (; u != 0;)
	{
		buf[count++] = (f / u) + '0';
		f = f % u;
		u = u / 10;
	}
	return (count);
}
