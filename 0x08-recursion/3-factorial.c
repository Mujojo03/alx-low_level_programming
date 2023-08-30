#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: the number to find the factorial
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
