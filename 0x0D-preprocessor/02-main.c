#include <stdio.h>
#include <string.h>
/*Write a program that prints the name of the file*/
/*it was compiled from, followed by a new line.*/
/**
* main - the main function
* Return: 0
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
