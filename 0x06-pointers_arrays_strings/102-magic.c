#include <stdio.h>

int main(void)
{
	int n;
	int a[s];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * oly one statement
	 */
	*(p + 5) = 98;
	/*...so that thisprints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}