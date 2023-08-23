#include "main.h"

/**
 * _strncpy - copirs at most an inputted number of bytes from
 * string src into dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 * Return: a pointer to the resulting sting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_leng = 0;

	while (src[index++])
	{
		src_leng++;
	}
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_leng; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
