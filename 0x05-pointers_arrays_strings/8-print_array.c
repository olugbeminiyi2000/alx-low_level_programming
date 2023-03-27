#include "main.h"
/*Write a function that prints n elements of an array of integers,*/
/*followed by a new line*/
/**
 * print_array - Our function
 *
 * @a: first parameter a of our function
 * @n: second parameter n of our function
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
