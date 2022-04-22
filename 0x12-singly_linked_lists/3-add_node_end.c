#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: pointer to the pointer to the first node of the list.
 * @str: string to be added to the node.
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
for (new_node->len = 0; str[new_node->len] != '\0'; new_node->len++)
;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new_node;
return (*head);
}
