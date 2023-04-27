#include "lists.h"
/*a function that returns the number of elements in a linked list_t list.*/
/**
 * list_len  - the function
 * @h: the parameter
 * Return: count
 */
size_t list_len(const list_t *h)
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
		p = p->next;
	}
	return (count);
}
