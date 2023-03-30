#include "main.h"
/*Write a function that changes all lowercase letters of a*/
/*string to uppercase.*/
/**
 * string_toupper - converts lowercase alpha to uppercase
 * @s: the parameter c
 * Return: returns a pointer
 */
char *string_toupper(char *s)
{
	int ascii_value;
	int length = strlen(s);
	int i = 0;

	for (i = 0; i < length; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			ascii_value = (int)s[i] - 32;
			s[i] = (char)ascii_value;
		} else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
