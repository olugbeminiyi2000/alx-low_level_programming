#include "main.h"
#include <stdio.h>
#include <math.h>
/*Write a program that finds and prints the largest prime factor*/
/**
 * main - Entry Point
 *
 * Return: Always int 0
 */
int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
