#include "shell.h"

/**
 * free_list_path - frees a list
 * @head: pointer to first node
 */
void free_list_path(path_l *head);
{
	path_l *ptr = NULL;

	for (; head != NULL;)
	{
		ptr = head;
		head = head->link;
		free(ptr->d_path);
		free(ptr);
	}
}
