#include "lists.h"
/*Write a function that inserts a new node at a given position.*/
/**
 * insert_nodeint_at_index - Our function that does the comment above
 *
 * @head: Our pointer to pointer parameter to the head structure
 * pointer in the main
 * @idx: the index that gives us the node link we want to insert
 * our new node
 * @n: the data integer for the new node
 *
 * Return: returns a pointer listint_t structure data type
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	unsigned int count = 0;
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *transverse1 = *head;
	listint_t *transverse2 = *head;

	newnode->n = n;
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (; transverse1 != NULL;)
	{
		count++;
		transverse1 = transverse1->next;
	}
	if (idx > count)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
	{
		transverse2 = transverse2->next;
	}
	newnode->next = transverse2->next;
	transverse2->next = newnode;
	return (newnode);
}
