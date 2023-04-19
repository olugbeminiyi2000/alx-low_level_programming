#include "function_pointers.h"
/*function that executes a function given as */
/*a parameter on each element of an array.*/
/**
 * array_iterator - function
 * @array: first parameter
 * @size: second parameter
 * @action: third parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
