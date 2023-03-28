#include "main.h"
/*Write a function that copies the string pointed to by src,*/
/*including the terminating null byte (\0),*/
/*to the buffer pointed to by dest*/
/**
 * _strcpy - Our function
 *
 * @dest: first parameter dest of function
 * @src: second parameter source of function
 * Return: returns a pointer address of a char d-type
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
