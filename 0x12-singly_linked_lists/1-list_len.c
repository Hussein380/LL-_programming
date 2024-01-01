/*Write a function that returns the number of elements in a linked list_t list.*/
#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to th e list
 * Return: returns number of elememnts
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h= h->next;
	}
	return(count);
}
