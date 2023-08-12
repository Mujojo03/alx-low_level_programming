#include <stdio.h>
/**
 * main - Entry point
 * prints nmbers to base 16 in lower case
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 43; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
