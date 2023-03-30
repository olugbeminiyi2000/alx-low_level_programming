#include "main.h"
/*Write a function that reverses the content of an array of integers*/
/**
 * reverse_array - print all values of an array in reverse order
 * @a: first parameter
 * @n: second parameter
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
