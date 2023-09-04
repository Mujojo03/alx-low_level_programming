
#include "main.h"
#include <stdio.h>
/**
 * main - it prints the number of args
 * @argv: the argument vector
 * @argc: the argumnet count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
