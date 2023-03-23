#include "main.h"
/*Write a function that prints the numbers, from 0 to 9,*/
/*followed by a new line.*/
/**
 * print_most_numbers - prints all numbers except 2 && 4
 *
 * Return: returns void or nothing
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			;
		} else
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
