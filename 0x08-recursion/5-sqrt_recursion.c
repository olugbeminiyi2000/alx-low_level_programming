#include "main.h"
/*a function that returns the natural square root of a number.*/
/**
 * sqrt_recursive - my function
 *
 * @n: parameter 1
 * @i: parameter 2
 * Return: the function should return -1
 */
int sqrt_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_recursive(n, i + 1));
	}
}
/*a function that returns the natural square root of a number.*/
/**
 * _sqrt_recursion - my function
 *
 * @n: parameter
 * Return: the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}
