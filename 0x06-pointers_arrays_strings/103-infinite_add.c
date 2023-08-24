#include "main.h"
/**
 * infinite_add - function to add two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: length of result
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* declare variables */
	int a = 0, b = 0, c = 0, d = 0, e, f, g;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		c = a;
	else
		c = b;
	if (c + 1 > size_r)
		return (0);
	r[d] = '\0';
	for (e = c - 1 ; e >= 0 ; e--)
	{
		a--;
		b--;
		if (a >= 0)
			f = n1[a] - '0';
		else
			f = 0;
		if (b >= 0)
			g = n2[b] - '0';
		else
			g = 0;
		r[e] = (f + g + d) % 10 + '0';
		d = (f + g + d) / 10;
	}
	if (d == 1)
	{
		r[c + 1] = '\0';
		if (c + 2 > size_r)
			return (0);
		while (c-- >= 0)
			r[c + 1] = r[c];
		r[0] = d + '0';
	}
	return (r);
}
