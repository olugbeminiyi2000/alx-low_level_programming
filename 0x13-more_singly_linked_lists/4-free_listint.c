#include "lists.h"
/*Write a function that frees a listint_t list.*/
/**
 * free_listint - frees the node of linked list by deleting
 * all data and valid addresses
 *
 * @head: the pointer to pointer parameter
 *
 * Return: return nothings
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
