#include "main.h"
/*Write a function that concatenates two strings.*/
/**
 * _strncat - The function that concatenates string
 *
 * @dest: first parameter of the function
 * @src: second parameter of the function
 * @n: Third parameter of the function
 * Return: returns a pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_1 = strlen(dest);
	int length_2 = n / sizeof(src[0]);
	int length_3 = strlen(src);
	int index;
	int i;

	for (i = 0; i < length_2; i++)
	{
		if (i <= length_3)
		{
			index = length_1 + i;
			dest[index] = *src;
			src++;
		}
	}
	return (dest);
}
