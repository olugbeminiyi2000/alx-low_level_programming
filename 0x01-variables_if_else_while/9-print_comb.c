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
		putchar('0' + number);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
