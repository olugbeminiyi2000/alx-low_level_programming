#include <stdio.h>
/*Write a program that prints all single digit */
/*numbers of base 10 starting from 0, followed by a new line */
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(0)
{
	int num;

	num = 0;
	do {
		putchar('0' + num);
		num++;
	} while (num < 10);
	putchar('\n');
	return (0);
}
