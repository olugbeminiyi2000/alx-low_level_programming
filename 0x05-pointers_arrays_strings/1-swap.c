#include "main.h"
/*Write a function that swaps the values of two integers.*/
/**
 * swap_int - Our function that swaps two integers
 *
 * @a: first parameter
 * @b: second parameter
 * Return: returns void or nothing
 */
void swap_int(int *a, int *b)
{
	int d = 1;
	int *c = &d;

	*c = *a;
	*a = *b;
	*b = *c;
}
