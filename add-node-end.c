#include "shell.h"

/**
 * add_node_end - adds a new node at the end of a path_l
 * @head: pointer to the head of list
 * @inp: pointer to string to add
 * Return: address of the new element
 */
path_l *add_node_end(path_l **head, char *inp)
{
	path_l *ptr = NULL;
	path_l *tmp = NULL;
	size_t g;

	ptr = malloc(sizeof(path_l));
	if (ptr == NULL)
		return (NULL);

	ptr->d_path = inp;
	ptr->link = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = ptr;
	else
	{
		for (g = 0; tmp->link != NULL; g++)
			tmp = tmp->link;
		tmp->link = ptr;
	}
	return (ptr);
}
