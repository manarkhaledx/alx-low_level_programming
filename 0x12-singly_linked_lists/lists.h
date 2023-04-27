#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @STR: string - (malloc'ed string)
 * @LEN: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *STR;
	unsigned int LEN;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *VAR);
size_t list_LEN(const list_t *VAR);
list_t *add_node(list_t **head, const char *STR);
list_t *add_node_end(list_t **head, const char *STR);
void free_list(list_t *head);

#endif


