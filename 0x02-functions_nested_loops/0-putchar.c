#include <stdio.h>
#include <unistd.h>
/*A program that prints _putchar, followed by a newline.*/
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", sizeof("_putchar\n"));
	putchar('\n');
	return (0);
}
