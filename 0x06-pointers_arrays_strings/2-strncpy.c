#include "main.h"
/*Write a function that copies a string.*/
/**
 * _strncpy - A function that copies a string
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: returns pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int n_bytes_len = n / sizeof(src[0]);
	int i;
	int length_src = strlen(src);
	int length_dest = strlen(dest);

	for (i = 0; i < n_bytes_len; i++)
	{
		if (i <= length_src && i < length_dest)
		{
			dest[i] = *src;
			src++;
		}
	}
	return (dest);
}
