#include "lists.h"
/*Write a function that deletes the node at index*/
/*index of a listint_t linked list.*/
/**
 * delete_nodeint_at_index - Our function doing the comment above
 *
 * @head: the pointer to pointer parameter
 *
 * @index: the index of the node you are trying to delete
 *
 * Return: returns an integer 1 for success and -1 for the opposite
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	unsigned int count = 0;
	listint_t *transverse1 = *head;
	listint_t *transverse2 = *head;
	listint_t *tempaddr;

	if (transverse1 == NULL && transverse2 == NULL)
		return (-1);
	for (; transverse1 != NULL;)
	{
		count++;
		transverse1 = transverse1->next;
	}
	if (index > count)
		return (-1);
	if (index == 0)
	{
		tempaddr = transverse2->next;
		free(transverse2);
		*head = tempaddr;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		transverse2 = transverse2->next;
	}
	if (transverse2->next == NULL)
		return (-1);
	tempaddr = transverse2->next->next;
	free(transverse2->next);
	transverse2->next = tempaddr;
	return (1);
}
