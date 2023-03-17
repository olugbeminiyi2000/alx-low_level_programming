#include <stdio.h>
/*Write a program that prints the alphabet in lowercase,*/
/*and then in uppercase, followed by a new line.*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Upper, Lower;

	for (Lower = 'a'; Lower <= 'z'; Lower++)
	{
		putchar(Lower);
	}

	for (Upper = 'A'; Upper <= 'Z'; Upper++)
	{
		putchar(Upper);
	}
	return (0);
}
