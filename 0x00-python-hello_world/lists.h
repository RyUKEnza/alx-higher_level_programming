#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h> 

/**
 * struct listint_s - singly linked list
 * @data: integer data
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_node 
{
	int data;
	struct list_node *next;
} list_node;


void print_list(const list_node *head);
list_node *add_node(int data, list_node *head);
void free_list_node(list_node *head);
int check_cycle(list_node *list);


#endif /* LISTS_H */
