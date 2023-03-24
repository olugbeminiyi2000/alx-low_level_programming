#include "main.h"
/*Write a function that prints an integer.*/
/**
 * print_number - Prints an integer
 * @n: The parameter of the function
 * Return: Nothing!
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int) n % 10 + '0');
}
