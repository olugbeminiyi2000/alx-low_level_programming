#include <stdio.h>
#include <stdlib.h>
/*Write a program that multiplies two numbers.*/
/**
 * main - Our main function
 *
 * @argc: Our first parameter
 * @argv: Our second parameter
 * Return: returns an output int
 */
int main(int argc, char **argv)
{
	int i;
	int result = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);

}
