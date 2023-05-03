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
	listint_t *ahead, *behind;

	if (head == NULL || *head === NULL)
		return (NULL);
	behind = NULL;
	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;
	return (*head);
}
