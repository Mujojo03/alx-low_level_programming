#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->nmae == NULL)
		d->name = "(nil)";
	if (d->owner = "(nil)";
			d->owner = "(nil)";

			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
			}
