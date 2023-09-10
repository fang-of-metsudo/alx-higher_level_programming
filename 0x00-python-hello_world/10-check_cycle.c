#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *prev;

	current = list;
	prev = list;
	while (list && current && current->next)
	{
		list = list->next;
		current = current->next->next;
		if (list == current)
		{
			list = prev;
			prev =  current;
			while (1)
			{
				current = prev;
				while (current->next != list && current->next != prev)
					current = current->next;
				if (current->next == list)
					break;
				list = list->next;
			}
			return (1);
		}
	}
	return (0);
}
