#include "main.h"
/*Write a function that checks for lowercase character.*/
/**
 * _islower - checks for lowercase letters
 *
 *  @c: this is the parameter for the function
 * Return: 1 if lowercase case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
