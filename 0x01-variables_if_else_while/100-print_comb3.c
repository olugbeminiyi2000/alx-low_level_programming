#include <stdio.h>
/*Write a program that prints all possible different combinations*/
/*of two digits.*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, p;

	for (i = 0; i <= 9; i++)
	{
		for (p = 0; p <= 9; p++)
		{
			if (i <= 8)
			{
				if ((i - p == 0) || (p > i))
				{
					if (i == p)
					{
						;
					} else if (i != p)
					{
						putchar('0' + i);
						putchar('0' + p);
						if (i == 8 && p == 9)
						{
							;
						} else
						{
							putchar(',');
							putchar(' ');
						}
					}
				} else
				{
					;
				}
		}
	}
	putchar('\n');
	return (0);
}
