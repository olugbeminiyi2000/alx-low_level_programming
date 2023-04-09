#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Write a program that adds positive numbers.*/
/**
 * main - Our function
 *
 * @argc: Our first parameter
 * @argv: Our second parameter
 * Return: returns an int
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
			continue;
		}
	}
	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
