#include "main.h"
/*Write a function that prints the binary representation of a number.*/
/**
 * print_binary - Our function doing the comment above
 *
 * @n: unsigned long int n
 *
 * Return: returns void or nothing
 */
void print_binary(unsigned long int n)
{
	/*determine the bits number of the paramter dtype by getting its byte*/
	/*then multiply by 8 since 1 byte is 8 bits*/
	int num_bits = sizeof(unsigned long int) * 8;
	int i;
	int has_set_bit = 0;

	/*iterate over each bit index starting from the last one*/
	/*one the far right which is the most significant bit*/
	for (i = num_bits - 1; i >= 0; i--)
	{
		/*then do this special syntax*/
		if ((n >> i) & 1)
		{
			_putchar('1');
			has_set_bit = 1;
		}
		else if (has_set_bit)
		{
			_putchar('0');
		}
	}
	if (!has_set_bit)
		_putchar('0');
}
