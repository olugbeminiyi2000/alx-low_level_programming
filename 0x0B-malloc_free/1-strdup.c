#include "main.h"
/* function that returns a pointer to a newly allocated space i*/
/*n memory, which contains a copy of the string given as a parameter.*/
/**
 * _strdup - the function
 * @str: first parameter
 * Return: returns pointer of type char
 */
char *_strdup(char *str)
{
	unsigned int length = strlen(str) + 1;
	unsigned int i;
	char *ptr = (char *)malloc(length);

	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
