#include "main.h"
/*Write a function that concatenates two strings.*/
/**
 * _strcat - our function concatenating two strings
 *
 * @dest: first parameter
 * @src: second parameter
 * Return: returns a pointer character as an output
 */
char *_strcat(char *dest, char *src)
{
	int length_1 = strlen(dest);
	int length_2 = strlen(src);
	int index;
	int i;

	for (i = 0; i < length_2; i++)
	{
		index = length_1 + i;
		dest[index] = *src;
		src++;
	}
	return (dest);
}
