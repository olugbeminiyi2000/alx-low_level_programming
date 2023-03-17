#include <stdio.h>
/* program that prints all the numbers of base 16 */
/* in lowercase, followed by a new line.*/
/**
 * main -Entery point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number;
	char Lower;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}
	for (Lower = 'a'; Lower <= 'f'; Lower++)
	{
		putchar(Lower);
	}
	putchar('\n');
	return (0);
}
