#include <stdio.h>
#include "main.h"
/*The main header file contain all our prototypes of functions*/
/*we are going to use including this function prototype*/
/**
 * print_alphabet - print all alphabet in lower case
 */
void print_alphabet(void)
{
	char Lower;

	for (Lower = 'a'; Lower <= 'z'; Lower++)
	{
		_putchar(Lower);
	}
	_putchar('\n');
}
