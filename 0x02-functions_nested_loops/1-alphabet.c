#include <stdio.h>
#include "main.h"
/*A function that prints the alphabet, in lowercase*/
/*followed by a new line*/
/**
 * print_alphabet - A function that prints all lowercase letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char LOWER;

	for (LOWER = 'a'; LOWER <= 'z'; LOWER++)
	{
		putchar(LOWER);
	}
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
