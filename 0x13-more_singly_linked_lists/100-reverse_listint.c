#include "lists.h"
/*Write a function that reverses a listint_t linked list.*/
/**
 * reverse_listint - Our function doing the reverse but with the
 * aid of other function also which are the add_nodeint_end
 * and free_listint2 functions
 *
 * @head: Our pointer to pointer parameter
 * Return: returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reversed = NULL;
	listint_t *transverse = NULL;

	while (*head)
	{
		transverse = (*head)->next;
		(*head)->next = reversed;
		reversed = *head;
		*head = transverse;
	}
	*head = transverse;
	return (*head);
}
