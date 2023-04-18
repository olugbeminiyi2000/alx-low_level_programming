#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/*Write a function that prints a struct dog*/
/**
 * print_dog - Our function
 * @d: a pointer of structure data type
 *
 * Return: returns void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", (*d).name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	printf("Age: %f\n", (*d).age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", (*d).owner);
}
