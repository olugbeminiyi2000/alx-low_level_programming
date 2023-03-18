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
		if (i <= 8)
		{
			putchar(i);
		} else
		{
			;
		}
		for (p = 0; p <= 9; p++)
		{
			if (i <= 8)
			{
				if ((i - p == 0) || (p > i))
				{
					if (i == p)
					{
						;
					} else
					{
						putchar(p);
						putchar(',');
						putchar(' ');
					}
				} else
				{
					;
				}
			} else
			{
				if ((i - p == 0) || (p > i))
				{
					if (i == p)
					{
						;
					} else
					{
						;
					}
				} else
				{
					;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
