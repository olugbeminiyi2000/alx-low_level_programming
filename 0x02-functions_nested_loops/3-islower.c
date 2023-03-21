#include "main.h"
/*Write a function that checks for lowercase character.*/
/**
 * _islower - checks for lowercase letters
 *
 * Return : 1 if lowercase case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
