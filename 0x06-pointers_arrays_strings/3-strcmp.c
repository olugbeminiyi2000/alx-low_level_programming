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

	ascii_1 = (int)*s1;
	ascii_2 = (int)*s2;
	return (ascii_1 - ascii_2);
}
