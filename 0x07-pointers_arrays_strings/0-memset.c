#include "main.h"
/* a function that fills memory with a constant byte.*/
/**
 * _memset - my function
 *
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: a pointer of type char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
