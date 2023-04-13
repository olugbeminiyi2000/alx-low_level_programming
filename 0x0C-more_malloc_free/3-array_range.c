#include "main.h"
/*function that creates an array of integers.*/
/**
 * array_range - function
 * @max: Our first parameter
 * @min: Our second parameter
 * Return: returns a pointer of int data type
 */
int *array_range(int min, int max)
{
	unsigned int n_blocks = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	n_blocks = (max - min) + 1;
	ptr = (int *)malloc(n_blocks * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
