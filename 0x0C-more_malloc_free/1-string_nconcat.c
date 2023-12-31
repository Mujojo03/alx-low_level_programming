#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates n bytes of a string to
 * another string
 * @s1: string to append to
 * @s2:string to concatenate from
 * @n: number of bytes form s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, leng1 = 0, leng2 = 0;
	char *s;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;
	if (n < leng2)
		s = malloc(sizeof(char) * (leng1 + n + 1));
	else
		s = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (!s)
		return (NULL);
	while (i < leng1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < leng2 && i < (leng1 + n))
		s[i++] = s2[j++];
	while (n >= leng2 && i < (leng1 + leng2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
