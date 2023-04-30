#include "lists.h"
/*Write a function that returns the number of elements*/
/*in a linked listint_t list.*/
/**
 * listint_len - Our function
 *
 * @h: the parameter
 *
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("No nodes in the linked list ");
		printf("using to tranverse the nodes.");
		return (1);
	}
	for (; h != NULL;)
	{
		count++;
		h = h->next;
	}
	return (count);
}
