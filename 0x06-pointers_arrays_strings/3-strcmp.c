#include "main.h"
/*Write a function that compares two strings.*/
/**
 * _strcmp - Our function comapring strings
 *
 * @s1: the first parameter s1
 * @s2: the second parameter s2
 * Return: returns an int
 */
int _strcmp(char *s1, char *s2)
{
	int ascii_1;
	int ascii_2;
	int i = 0;
	int length_1 = strlen(s1);
	int length_2 = strlen(s2);

	while (i < length_1 || i < length_2)
	{
		ascii_1 = (int)*s1;
		ascii_2 = (int)*s2;
		if (ascii_1 == ascii_2)
		{
			s1++;
			s2++;
			i++;
			continue;
		} else if (ascii_1 < ascii_2 || ascii_1 > ascii_2)
		{
			break;
		}
	}
	return (ascii_1 - ascii_2);
}
