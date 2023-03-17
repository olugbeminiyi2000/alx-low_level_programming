#include <stdio.h>
/* a program that prints all single digit numbers*/
/*of base 10 starting from 0, followed by a new line.*/
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n")
	return (0);
}
