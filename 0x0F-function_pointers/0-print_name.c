#include "function_pointers.h"
/*Write a function that prints a name.*/
/**
 * print_name - the function
 * @name: first parameter
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
