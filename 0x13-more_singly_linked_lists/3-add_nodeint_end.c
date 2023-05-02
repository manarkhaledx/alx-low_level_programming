#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *newdd;
 listint_t *xf = *head;

 new = malloc(sizeof(listint_t));
 if (!newdd)
 return (NULL);

 new->n = n;
 new->next = NULL;

 if (*head == NULL)
 {
 *head = newdd;
 return (newdd);
 }

 while (xf->next)
 xf = xf->next;

 xf->next = newdd;

 return (newdd);
}


