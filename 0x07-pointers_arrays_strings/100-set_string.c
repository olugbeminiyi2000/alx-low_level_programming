#include "main.h"
/*Write a function that sets the value of a pointer to a char*/
/**
 * set_string - Our function
 *
 * @s: first parameter
 * @to: second parameter
 * Return: returns nothing or void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
