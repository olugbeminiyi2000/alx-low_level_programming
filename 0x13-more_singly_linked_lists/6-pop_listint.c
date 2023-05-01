#include "lists.h"
/*Write a function that deletes the head node of a listint_t linked list,*/
/*and returns the head node’s data (n).*/
/**
 * pop_listint - Our function removes the first node of linked list
 *
 * @head: Our pointer to pointer head paramter
 *
 * Return: returns an int
 */
int pop_listint(listint_t **head)
{
	int i, n;
	listint_t *transverse = *head;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	for (i = 0; i < 1; i++)
	{
		temp = transverse->next;
		n = transverse->n;
		free(transverse);
		transverse = temp;
	}
	(*head) = transverse;
	return (n);
}
