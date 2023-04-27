#include "lists.h"
/*Write a function that frees a list_t list.*/
/**
 * free_list - the function
 * @head: the parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
