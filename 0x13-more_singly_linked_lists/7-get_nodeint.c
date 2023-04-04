#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n <= index)
		{
			if (n  == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			n++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
