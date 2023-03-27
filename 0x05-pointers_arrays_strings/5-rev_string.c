#include "main.h"
#include <string.h>
/*Write a function that reverses a string.*/
/**
 * rev_string - My function
 *
 * @s: the s parameter of my function
 * Return: returns void or nothing
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
