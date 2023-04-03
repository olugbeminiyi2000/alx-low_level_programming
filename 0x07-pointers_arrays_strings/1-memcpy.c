#include "main.h"
/*function that copies memory area.*/
/**
 * _memcpy - my function
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
