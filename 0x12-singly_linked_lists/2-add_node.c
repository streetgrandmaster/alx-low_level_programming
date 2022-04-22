#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the pointer to the first node of the list.
 * @str: string to be added to the node.
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t nchar;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
for (nchar = 0; str[nchar] != '\0'; nchar++)
;
new_node->len = nchar;
new_node->next = *head;
*head = new_node;
return (*head);
}
