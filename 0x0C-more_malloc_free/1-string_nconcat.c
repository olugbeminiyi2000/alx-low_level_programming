#include "main.h"
/*Write a function that concatenates two strings.*/
/**
 * string_nconcat - function
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 * Return: pointer of type char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = (char *)malloc(1);
		*s2 = '\0';
	}
	if (n >= strlen(s2))
		str = (char *)malloc(strlen(s1) + n + 1);
	str = (char *)malloc(strlen(s1) + n + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (strlen(s1) == 0 && strlen(s2) == 0)
	{
		str[i] = '\0';
		return (str);
	}
	while (i < strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i < strlen(s1) + n + 1 && j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
