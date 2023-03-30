#include "main.h"
/*Write a function that capitalizes all words of a string.*/
/**
 * cap_string - Our function
 * @c: The only parameter
 * Return: returns a pointer of char type
 */
char *cap_string(char *c)
{
	int index = 0;

	while (c[index])
	{
		while (!(c[index] >= 'a' && c[index] <= 'z'))
		{
			index++;
		}
		if (c[index - 1] == ' ' ||
		c[index - 1] == '\t' ||
		c[index - 1] == '\n' ||
		c[index - 1] == ',' ||
		c[index - 1] == ';' ||
		c[index - 1] == '.' ||
		c[index - 1] == '!' ||
		c[index - 1] == '?' ||
		c[index - 1] == '"' ||
		c[index - 1] == '(' ||
		c[index - 1] == ')' ||
		c[index - 1] == '{' ||
		c[index - 1] == '}' ||
		index == 0)
		{
			c[index] -= 32;
		}
		index++;
	}
	return (c);
}
