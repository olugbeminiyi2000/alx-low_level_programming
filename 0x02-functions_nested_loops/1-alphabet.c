#include <stdio.h>
/*Write a function that prints the alphabet,*/
/*in lowercase, followed by a new line.*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	void print_alphabet(void);
	return (0);
}

/**
 * print_alphabet - the function declaration
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet - prints all lower case alphabets
 *
 * Return: always void
 */
void print_alphabet(void)
{
	char Lower;

	for (Lower = 'a'; Lower < 'z'; Lower++)
	{
		putchar(Lower);
	}
	putchar('\n');
}
