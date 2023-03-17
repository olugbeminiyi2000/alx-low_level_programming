#include <stdio.h>
/*A program that prints the alphabet in lowercase, followed by a newline*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar("\n");
}
