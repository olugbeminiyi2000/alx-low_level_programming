#include "main.h"
/*Write a function that sets the value of a bit to 1 at a given index.*/
/**
 * set_bit - function that does comment above
 *
 * @n: first paramter
 * @index: 2nd parameter
 *
 * Return: returns int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	char str[sizeof(unsigned long int) * 8 + 1];
	unsigned long int value = (*n);

	if (index > num_bits - 1)
		return (-1);
	binary(value, str);
	/*replacing the index to '1'*/
	str[num_bits - 1 - index] = '1';
	(*n) = my_binary_to_uint(str);
	return (1);
}
/*Write a function that prints the binary representation of a number.*/
/**
 * binary - Our function doing the comment above
 *
 * @n: unsigned long int n
 * @str: pointer parameter
 * Return: returns void or nothing
 */
void binary(unsigned long int n, char *str)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i, j;

	for (i = num_bits - 1, j = 0; i >= 0 && j < num_bits; i--, j++)
	{
		if ((n >> i) & 1)
		{
			str[j] = '1';
		}
		else
		{
			str[j] = '0';
		}
	}
	str[num_bits] = '\0';
}
/*Write a function that converts a binary number to an unsigned int*/
/**
 * my_binary_to_uint - Our function to solving the comment above
 *
 * @b: Our constant pointer b of type char
 *
 * Return: returns converted number. or 0 if
 * there is one or more chars in the string that is not 0 or 1
 * or when b is NULL
 */
unsigned int my_binary_to_uint(const char *b)
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
