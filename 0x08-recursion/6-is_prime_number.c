#include "main.h"
/*function that returns 1 if the input integer is a prime */
/**
 * is_divisible - my function
 *
 * @n: parameter 1
 * @i: parameter 2
 * Return: 0
 */
int is_divisible(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (is_divisible(n, i - 1));
	}
}
/*function that returns 1 if the input integer is a prime */
/**
 * is_prime_number_recursive - my second function
 *
 * @n: parameter 1
 * @i: parameter 2
 * Return: 0
 */
int is_prime_number_recursive(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0 && is_divisible(i, i - 1))
		{
			return (0);
		}
		else
		{
			return (is_prime_number_recursive(n, i - 1));
		}
	}
}
/*function that returns 1 if the input integer is a prime */
/**
 * is_prime_number - my third function
 *
 * @n: parameter 1
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_recursive(n, n - 1));
}
