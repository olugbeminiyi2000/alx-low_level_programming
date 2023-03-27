#include "main.h"
/*Write a function that prints a string, followed by a new line,*/
/*to stdout.*/
/**
 * _puts - Our function
 *
 * @str: the parameter of the function
 * Return: returns void or nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
