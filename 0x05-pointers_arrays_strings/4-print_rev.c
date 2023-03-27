#include "main.h"
#include <string.h>
/*Write a function that prints a string, in reverse,*/
/*followed by a new line.*/
/**
 * print_rev - Our function
 *
 * @s: Th parameter s of our function
 * Return: returns void or nothing
 */
void print_rev(char *s)
{
	int length;
	char *last;

	length = strlen(s);
	last = s + (length - 1);
	while (*last != '\0')
	{
		_putchar(*last);
		last--;
	}
	_putchar('\n');
}
