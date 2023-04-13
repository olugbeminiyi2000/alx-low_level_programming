#include "main.h"
/*Write a function that allocates memory for an array, using malloc.*/
/**
 * _calloc - our own calloc function
 *
 * @nmemb: first parameter called no of blocks
 * @size: second parameter called size of each block
 * based on the data type
 * Return: return a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
