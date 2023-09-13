#include "function_pointers.h"
#include <stdio.>
/**
 * print_name - prints name using pointer to function
 * @name: the string to add
 * @f: the pointer to the function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NILL)
		return;
	f(name);
}
