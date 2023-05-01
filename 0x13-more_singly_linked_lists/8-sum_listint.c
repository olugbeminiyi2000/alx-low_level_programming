#include "lists.h"
/*Write a function that returns the sum of all the data (n) of a listint_t*/
/*linked list.*/
/**
 * sum_listint - Our function does the comment above
 *
 * @head: out head pointer holding the malloc address of
 * our head pointer in the main function whic has the first
 * address of our single linked list
 *
 * Return: returns sum of int data in singly linked list
 * or returns 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *transverse = head;

	if (head == NULL)
		return (0);
	for (; transverse != NULL;)
	{
		sum += transverse->n;
		transverse = transverse->next;
	}
	return (sum);
}
