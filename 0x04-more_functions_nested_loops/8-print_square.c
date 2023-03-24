#include "main.h"
/*Write a function that prints a square, followed by a new line.*/
/**
 * print_square - prints hash tag in square
 * @size: the parameter size of the function
 * Return: void or nothing
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
