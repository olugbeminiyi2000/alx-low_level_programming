#include "main.h"
/*a function that prints a string in reverse.*/
/**
 * _print_rev_recursion - my function
 *
 * @s: parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
