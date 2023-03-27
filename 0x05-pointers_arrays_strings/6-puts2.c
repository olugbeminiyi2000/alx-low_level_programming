#include "main.h"
#include <string.h>
/*Write a function that prints every other character of a string,*/
/*starting with the first character, followed by a new line.*/
/**
 * puts2 - Our function
 *
 * @str: The parameter str of our function
 * Return: returns void or nothing
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
	{
		if (*str != '\0')
		{	_putchar(*str);
			str += 2;
		}
	}
	_putchar('\n');
}
