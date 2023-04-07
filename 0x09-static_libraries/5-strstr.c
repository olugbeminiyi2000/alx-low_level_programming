#include "main.h"
/*a function that locates a substring.*/
/**
 * _strstr - my function
 *
 * @haystack: first parameter
 * @needle: second parameter
 * Return: pointer of type char
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
