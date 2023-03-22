#include "main.h"
#include <stdlib.h>
/*Write a function that prints the last digit of a number.*/
/**
 * print_last_digit - function print last digit
 *
 * @n: parameter n of the function
 * Return: Always retrun last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
