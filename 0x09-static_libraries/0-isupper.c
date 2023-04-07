#include "main.h"
/*Write a function that checks for uppercase character.*/
/**
 * _isupper - this function prints all uppercase letter
 *
 * @c: the parameter c of the function
 * Return: returns Always int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
