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
	printf("%d\n", argc);
	return (0);
}
