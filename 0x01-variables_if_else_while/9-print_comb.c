#include <stdio.h>
/*Write a program that prints all possible */
/*combinations of single-digit numbers.*/
/**
 * main -Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number < 9)
		{
			putchar('0' + number);
			putchar(',');
			putchar(' ');
		} else
		{
			putchar(number + '\n');
		}
	}
	return (0);
}
