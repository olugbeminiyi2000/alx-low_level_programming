#include "main.h"
/*Write a function that prints 10 times the numbers,*/
/*from 0 to 14, followed by a new line.*/
/**
 * more_numbers - print numbers from 0 - 14
 *
 * Return: void or nothing
 */
void more_numbers(void)
{
	int count, num;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 0 && num < 10)
			{
				_putchar(num + '1');
			}
			_putchar(num % 10 + '0');
		}
		putchar('\n');
	}
}
