#include <stdio.h>
/*testing the last question*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;
	for (i = 00; i <= 99; i++)
	{
		for (j = i + 01; j <= 99; j++)
		{
			putchar((i/10) + '0');
			putchar((i%10) + '0');
			putchar(' ');
			putchar((j/10) + '0');
			putchar((j%10) + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			} else
			{
				;
			}
		}
	}
	putchar('\n');
	return (0);
}
