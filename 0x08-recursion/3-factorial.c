#include "main.h"
/* function that returns the factorial of a given number.*/
/**
 * factorial - my function
 *
 * @n: parameter
 * Return: -1 if -n, 1 if 0 or 1, factorial if n > 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
