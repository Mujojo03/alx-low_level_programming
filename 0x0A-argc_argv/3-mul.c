#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - outputs the multiplication of two numbers
 * @argv: the argument vector
 * @argc: the argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 1;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error Occurred\n");
		return (1);
	}
	return (0);
}
