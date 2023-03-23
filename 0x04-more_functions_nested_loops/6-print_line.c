#include "main.h"
/*Write a function that draws a straight line in the terminal.*/
/**
 * print_line - print underscores based on the value.
 * @n: the parameter n of the function
 * Return: returns void or nothing
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
