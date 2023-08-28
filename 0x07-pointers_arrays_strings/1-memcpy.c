#include "main.h"
/**
 * _memcpy - the entry point
 * @dest: input.
 * @n: input
 * @src: input
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsignes int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
