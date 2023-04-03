#include "main.h"
/* function that prints the sum of the two diagonals */
/*of a square matrix of integers.*/
/**
 * print_diagsums - my function
 *
 * @a: first parameter
 * @size: second parameter
 * Return: sum of two diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum_i = 0;
	int sum_j = 0;
	int length = size * size;

	for (i = 0; i < length; i = i + size + 1)
	{
		sum_i = sum_i + a[i];
	}
	for (j = size - 1; j < length - 1; j = j + size - 1)
	{
		sum_j = sum_j + a[j];
	}
	printf("%d", sum_i);
	printf(",");
	printf(" ");
	printf("%d", sum_j);
	printf("\n");
}
