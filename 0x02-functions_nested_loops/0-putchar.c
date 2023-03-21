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
	char message[] = "_putchar";
	int num_of_bytes = sizeof(message);
	write(STDOUT_FILENO, message, num_of_bytes );
	return (0);
}
