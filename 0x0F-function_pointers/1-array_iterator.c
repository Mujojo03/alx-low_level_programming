#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elm on a new line
 * @array: array
 * @size: how many elm to print
 * @action: the pointer to print in regular or hexa
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NLL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
