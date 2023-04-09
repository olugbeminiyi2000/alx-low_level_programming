#include <stdio.h>
/*Write a program that prints all arguments it receives.*/
/**
 * main - Our main function
 *
 * @argc: Our first parameter
 * @argv: Our second parameter
 * Return: returns the output int if program successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
