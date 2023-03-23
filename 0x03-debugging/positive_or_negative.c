#include "main.h"
/*A function that tells if a number is negative, positive or zero*/
/**
 * positive_or_negative - number sign check
 *
 * @i: the function parameter
 * Return: nothing or void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	} else if (i == 0)
	{
		printf("%d is zero", i);
	} else
	{
		printf("%d is negative", i);
	}
}
