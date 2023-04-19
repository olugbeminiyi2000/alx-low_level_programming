#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/*function that selects the correct function to perform */
/*the operation asked by the use*/
/**
 * get_op_func - the function
 * @s: the parameter
 *
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
