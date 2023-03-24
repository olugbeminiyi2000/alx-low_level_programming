#include "main.h"
/*write a function that draws a diagonal line on the terminal*/
/**
 * print_diagonal - prints the diagonal lines
 * @n: the parameter n of the function
 * Return: void or nothing
 */
void print_diagonal(int n)
{
	int value = 1, count, NOT, space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			putchar('\\');
			putchar('\n');
			if (n > value)
			{
				NOT = count + 1;
				for (space = 0; space < NOT; space++)
				{
					putchar(' ');
				}
			} else
			{
				;
			}
			value += 1;
		}
	} else
	{
		putchar('\n');
	}
}
