#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print element of a list
 * @h: pointer to a list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h !=  NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]  %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}	return (count);
}
