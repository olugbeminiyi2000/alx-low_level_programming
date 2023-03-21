#include "main.h"
#include <stdlib.h>
/*Write a function that prints the last digit of a number.*/
/**
 * print_last_digit - function print last digit
 *
 * Return: Always retrun last digit
 */
int print_last_digit(int n)
{
	int num;
	int value;
	num = 10;

	if (n < 0);
	{
		value = abs(n);
	} else
	{
		value = n;
	}
	return (value % num);
}
