#include "variadic_functions.h"
/*Write a function that returns the sum of all its parameters.*/
/**
 * sum_them_all - Our suming function
 *
 * @n: Our fixed arguement last parameter before the ellipses
 * @...: Our ellipses parameter
 *
 * Return: Our return type of int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;
	int sum = 0;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numlist, int);
	}
	va_end(numlist);
	return (sum);
}
