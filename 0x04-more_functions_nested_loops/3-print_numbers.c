#include "main.h"
/*Write a function that prints the numbers,*/
/*from 0 to 9, followed by a new line.*/
/**
 * print_numbers - prints all numbers from 0 - 9
 *
 * Return: returns void or nothing
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
