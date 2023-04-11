#include "main.h"
/*a function that concatenates two strings.*/
/**
 * str_concat - the function
 * @s1: first paramter
 * @s2: second parameter
 * Return: pointer of type character
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int tl, ls1, ls2, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	ls1 = strlen(s1);
	ls2 = strlen(s2) + 1;
	tl = ls1 + ls2;
	ptr = (char *)malloc(tl);
	i = 0;
	j = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < ls1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < tl && j < ls2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
