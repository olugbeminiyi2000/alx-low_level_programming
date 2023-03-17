#include <stdio.h>
/*Write a program that prints the alphabet in lowercase,*/
/*followed by a new line.*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Lower;

	for (Lower = 'a'; Lower <= 'z'; Lower++)
	{
		if (Lower == 'p' || Lower == 'e')
		{
			;
		} else
		{
			putchar(Lower);
		}
	}
	putchar('\n');
	return (0);
}
