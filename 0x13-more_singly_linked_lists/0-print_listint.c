#include "lists.h"
/**
* print_listint - function that prints all the elements
* of a list_t list.
* @h: head list.
*
* Return: number of node.
*/
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
