#include "lists.h"
#include <stdlib.h>


/**
 * free_list - function that frees list
 * @head: pointer to the start of the list
 * Return: zero on  success
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next; /*save te next node before freeing the current node*/

		free(current->str);
		free(current);
 
		current = next;
	}
}
