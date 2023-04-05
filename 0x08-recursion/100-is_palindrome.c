#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_helper - Helper function
 *
 * @s: first parameter
 * @start: second parameter
 * @end: third parameter
 * Return: returns a type int
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/*Write a function that returns 1 if a string is a palindrome and 0 if not.*/
/**
 * is_palindrome - The actual function
 *
 * @s: the only parameter
 * Return: returns a type int
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
