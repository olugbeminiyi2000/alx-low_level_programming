#include "main.h"
/* Write a function that checks for alphabetic character.*/
/**
 * _isalpha - prints alphabetic character
 *
 * @c: the parameter c of the function
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
