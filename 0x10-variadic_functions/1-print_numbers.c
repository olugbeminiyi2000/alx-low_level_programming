#include "variadic_functions.h"
/*Write a function that prints numbers, followed by a new line.*/
/**
 * print_numbers - Our function
 *
 * @separator: our comma space string separator
 * @n: our last fixed paramter before ellipses
 * @...: our variadic arguements
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numlist, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
