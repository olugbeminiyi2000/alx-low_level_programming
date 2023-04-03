#include "main.h"
/*Write a function that prints the chessboard.*/
/**
 * print_chessboard - Our function
 *
 * @a: The first parameter
 * Return: returns void or nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			} else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
