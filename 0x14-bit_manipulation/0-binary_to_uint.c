#include "main.h"
/*Write a function that converts a binary number to an unsigned int*/
/**
 * binary_to_uint - Our function to solving the comment above
 *
 * @b: Our constant pointer b of type char
 *
 * Return: returns converted number. or 0 if
 * there is one or more chars in the string that is not 0 or 1
 * or when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, powercount, i, j;
	unsigned int decimal = 0;
	unsigned int binary = 2;

	if (b == NULL)
		return (0);
	for (j = 0; j < strlen(b); j++)
	{
		if (isalpha(b[j]))
			return (0);
	}
	for (length = strlen(b), i = 0; length > 0; length--, i++)
	{
		unsigned int power = 1;
		char c = b[i];

		if (length == 1)
		{
			decimal += atoi(&c) * 1;
			continue;
		}
		for (powercount = length - 1; powercount > 0; powercount--)
		{
			power *= binary;
		}
		decimal += atoi(&c) * power;
	}
	return (decimal);
}
