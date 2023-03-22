#include "main.h"
/*Write a function that prints the sign of a number.*/
/**
 * print_sign - print the segin of a number
 *
 * @n: the parameter for the function
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
