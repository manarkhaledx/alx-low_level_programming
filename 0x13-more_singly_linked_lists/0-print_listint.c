#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
<<<<<<< HEAD
	size_t nu = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nu++;
		h = h->next;
	}

	return (nu);
=======
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
>>>>>>> 2ac2154981d9476da4d595455990ea02cb4d7cd6
}

