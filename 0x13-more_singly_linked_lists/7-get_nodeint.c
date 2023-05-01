#include  "lists.h"
/*Write a function that returns the nth node of a listint_t linked list.*/
/**
 * get_nodeint_at_index - The function gets the data stored in the link.
 * of that node index
 *
 * @head: Our pointer parameter equal to our main function head
 * pointer value
 * @index: the n-node which its link is used to get the data value
 *
 * Return: returns a pointer of type listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nodeaddr;
	listint_t *transverse;

	transverse = head;
	if (index == 0)
	{
		nodeaddr = transverse;
		return (nodeaddr);
	}
	for (i = 0; i < index && transverse != NULL; i++)
	{
		nodeaddr = transverse->next;
		transverse = transverse->next;
	}
	if (transverse == NULL)
		return (NULL);
	return (nodeaddr);
}
