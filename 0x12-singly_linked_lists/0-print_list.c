#include "lists.h"
/* Write a function that prints all the elements of a list_t list.*/
/**
 * print_list - the function
 * @h: the parameter
 * Return: count
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	unsigned int count = 0;

	if (h == NULL)
	{
		printf("Linked list is Empty\n");
		return (1);
	}
	p = h;
	while (p != NULL)
	{
		count++;
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(p->str), p->str);
		p = p->next;
	}
	return (count);
}
