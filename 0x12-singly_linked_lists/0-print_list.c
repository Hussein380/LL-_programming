#include "lists.h"
#include <stddef.h>i
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print element of a list
 * @h: pointer to a list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	/*sets new to pint the head*/
	const list *new = head;
	size-t count = 0;

	while (new !=  NULL)
	{
		if (new->str == NULL)
		{
			printf("[0], (nil)\n");
		}
		else
		{
			printf("[u]  %s\n, ", new->len, new_>str);
		}
		new = new->next;
		count++;
	}
	return (count);
}
