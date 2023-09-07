#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memorypreviously allocated bt malloc
 * @old_size: the size of memory ptr
 * @new_size: the new size of the memory bloc
 * Return: pointer to the new allocated memory bloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if new_size == old_size
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr)
			return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size)
		if (!ptr1)
			return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr[i] = old_ptr[i];
	}
	free(ptr)
		return (ptr1);
}
