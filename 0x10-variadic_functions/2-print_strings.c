#include "variadic_functions.h"
/*Write a function that prints strings, followed by a new line.*/
/**
 * print_strings - Our function
 *
 * @separator: Our function fixed parameter
 * @n: Our function last parameter
 * @...: variadic parameters
 *
 * Return: returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringList;
	char *s;

	va_start(stringList, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(stringList, char*);
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(stringList);
	printf("\n");
}
