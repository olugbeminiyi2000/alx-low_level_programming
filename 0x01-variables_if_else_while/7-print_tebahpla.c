#include <stdio.h>
/*Write a program that prints the lowercase alphabet */
/*in reverse, followed by a new line. */
/**
 * main  -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Lower;

	for (Lower = 'z'; Lower >= 'a'; Lower--)
	{
		putchar(Lower);
	}
	putchar('\n');
	return (0);
}
