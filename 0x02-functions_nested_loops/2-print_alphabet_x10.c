#include "main.h"
/*Write a function that prints 10 times the alphabet,*/
/*in lowercase, followed by a new line.*/
/**
 * print_alphabet_x10 - printing alphabet in lower case 10 times
 *
 */
void print_alphabet_x10(void)
{
	int count;
	for (count = 0; count < 10; count++)
	{
		char Lower;
		
		for (Lower = 'a'; Lower <= 'z'; Lower++)
		{
			_putchar(Lower);
		}
		_putchar('\n');
	}
}
