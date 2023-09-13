#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - check if a linked list is a palindrome
 * @head: head of the linked list
 * Return: 1 if the list was a palindrome, otherwise 0
*/

int is_palindrome(listint_t **head)
{
	int len, half, i;
	listint_t *ptr;
	int *list_elements, right, left;

	len = half = 0;
	ptr = *head;
	while (ptr->next != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	list_elements = malloc(len * sizeof(int));
	ptr = *head;
	for (i = 0; i <= len; i++)
	{
		list_elements[i] = ptr->n;
		ptr = ptr->next;
	}

	right = 0;
	left = len;

	for (i = 0; i <= len / 2; i++)
	{
		if (list_elements[right] == list_elements[left])
		{
			right++;
			left--;
		}
		else
			return (0);
	}

	return (1);
}
