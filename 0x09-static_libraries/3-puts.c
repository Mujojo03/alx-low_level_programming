#include "main.h"
/**
 * _puts - it prints a strings to stdout
 * @str: ponter to the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
