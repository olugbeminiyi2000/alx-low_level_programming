#include <stdio.h>
#include <stdlib.h>
/*Write a program that prints the minimum number of coins*/
/*to make change for an amount of money.*/
/**
 * main - Our function
 *
 * @argc: first parameter
 * @argv: second parameter
 * Return: returns int type
 */
int main(int argc, char *argv[])
{
	int cents;
	int num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		cents -= 25;
		num_coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		num_coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		num_coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		num_coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		num_coins++;
	}
	printf("%d\n", num_coins);
	return (0);
}
