#define LISTS_H

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

/* Function prototypes */
void print_list(const list_node *head);
list_node *add_node(int data, list_node *head);

#endif /* LISTS_H */
