#include "main.h"
#include <string.h>
/*Write a function that prints half of a string, followed by a new line.*/
/**
 * puts_half - Our function
 *
 * @str: The parameter str for the function
 * Return: returns void or nothing
 */
void puts_half(char *str)
{
	int length, _rvalues;
	char *sstr;

	length = strlen(str);
	if (length % 2 == 0)
	{
		_rvalues = length / 2;
		sstr = str + _rvalues;
		while (*sstr != '\0')
		{
			_putchar(*sstr);
			sstr++;
		}
	} else
	{
		_rvalues = ((length - 1) / 2) + 1;
		sstr = str + _rvalues;
		while (*sstr != '\0')
		{
			_putchar(*sstr);
			sstr++;
		}
	}
	_putchar('\n');
}
