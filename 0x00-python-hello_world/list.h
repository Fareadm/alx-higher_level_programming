#ifdef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * stuct listint_s singly linked list
 * @n: integer
 * @next: points to te next node
 *
 * Descripton: singly linke list node structure
 * for this poject
 */
typedef struct lintint_s
{
	int n;
	struct listint_s *next;
}
listint_t;
size_t print_listint(const listint_t*h);
listint *add_nodeint(listint_t**head, const int n);
vid free_listint(listint_t *head);
int chech_cycle(listint_t *list);

#endif /* LIST_H */
