#include <stdio.h>
#include <unistd.h>
#include "main.h"

/*A function _putchar*/
/**
 * _putchar - Prints the string _putchar followed by a new line
 *
 * Return: Always 0 (success)
 */
int _putchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	return (0);
}
/*A program that prints _putchar  followed by a newline.*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	_putchar();
	return (0);
}
