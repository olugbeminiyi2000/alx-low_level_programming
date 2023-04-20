#include "variadic_functions.h"
/*Write a function that prints anything.*/
/**
 * print_all - the function
 * @format: the first parameter
 * @...: the second parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c, *s;
	int i, n = 0, printed = 0;

	va_start(args, format);
	while (format && format[n])
	{
		c = format[n];
		if (printed && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				printed = 1;
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				printed = 1;
				break;
			default:
				break;
		}
		n++;
	}
	va_end(args);
	printf("\n");
}

