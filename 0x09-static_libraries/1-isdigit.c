#include "main.h"
/*Write a function that checks for a digit (0 through 9).*/
/**
 * _isdigit - A function that only checks digit
 * @c: the parameter of the function
 *
 * Return: returns an int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
