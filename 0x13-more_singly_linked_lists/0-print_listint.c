#include "lists.h"
/*Write a function that prints all the elements of a listint_t list.*/
/**
 * print_listint - Our function
 *
 * @h: Our parameter
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		printf("Linked list empty\n");
		return (0);
	}
	for (; h != NULL;)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
