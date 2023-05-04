#include "main.h"
/*Write a function that returns the value of a bit at a given index.*/
/**
 * get_bit - Our function doing the comment above
 *
 * @n: unsigned long int parameter
 * @index: unsigned int parameter
 *
 * Return: returns the bit in int of that index or -1 if index is not there
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	int i, value;

	if (index > num_bits - 1)
		return (-1);
	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned int j = i;
		if (j == index)
		{
			if ((n >> j) & 1)
				value = 1;
			else
				value = 0;
		}
		continue;
	}
	return (value);
}
