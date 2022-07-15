#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *create_node, *temp;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	create_node = malloc(sizeof(list_t));
	if (create_node == NULL)
		return (NULL);

	create_node->str = strdup(str);
	create_node->len = _strlen(str);
	create_node->next = NULL;

	if (*head == NULL)
		*head = create_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = create_node;
	}

	return (create_node);
}
