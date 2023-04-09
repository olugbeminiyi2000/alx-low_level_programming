#include <stdio.h>
/*Write a program that prints the number of arguments passed into it.*/
/**
 * main - Our function
 *
 * @argc: first parameter
 * @argv: second parameter
 * Return: returns an int
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int sum = 0;
	int i;

	for (i = 1; i < argc &&  argc > 1; i++)
	{
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
