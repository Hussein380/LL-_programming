#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *duplicate_str;

	/*allocate memory for the new_node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*duplicate string using strdup*/
	duplicate_str = strdup(str);
	if(duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*fill in the new_node*/
	new_node->str = duplicate_str;
	new_node->len = strlen(duplicate_str);
	new_node->next = NULL;

	/*if the list is empty , make the new_node the head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*find the last_node in the list*/
	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return(new_node);
}
