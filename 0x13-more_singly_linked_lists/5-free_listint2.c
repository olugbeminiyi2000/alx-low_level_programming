#include "lists.h"
/*Write a function that frees a listint_t list.*/
/**
 * free_listint2 - frees our singly linked list
 *
 * @head: our pointer to pointer parameter
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *transverse = *head;
	listint_t *tempadd;

	while (transverse != NULL)
	{
		tempadd = transverse->next;
		free(transverse);
		transverse = tempadd;
	}
	(*head) = transverse;
}
