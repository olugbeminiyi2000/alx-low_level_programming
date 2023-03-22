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
	int num = 10;
	int value;

	if (n < 0)
	{
		value = abs(n);
	} else if (n > 0)
	{
		value = n;
	}
	return (value % num);
}
