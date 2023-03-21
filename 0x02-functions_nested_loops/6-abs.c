#include "main.h"
/*Write a function that computes the absolute value of an integer.*/
/** 
 * int_abs - gives the absolute value of an integer
 *
 * Return: the absolute value of integer n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	} else
	{
		return (-1 * n);
	}
}
