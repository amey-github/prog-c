

#include <stdio.h>
#include <stdlib.h>

/* a node of the doubly linked list */
struct node
{
int data;
struct node *next;
struct node *prev;
};

/* Function to delete a node in a Doubly Linked List.
head_ref --> pointer to head node pointer.
del --> pointer to node to be deleted. */
void deleteNode(struct node **head_ref, struct node *del)
{
/* base case */
if(*head_ref == NULL || del == NULL)
return;

/* If node to be deleted is head node */
if(*head_ref == del)
*head_ref = del->next;

/* Change next only if node to be deleted is NOT the last node */
if(del->next != NULL)
del->next->prev = del->prev;

/* Change prev only if node to be deleted is NOT the first node */
if(del->prev != NULL)
del->prev->next = del->next;

/* Finally, free the memory occupied by del*/
free(del);
return;
}

/* Function to insert a node at the beginning of the Doubly Linked List */
void push(struct node** head_ref, int new_data)
{
/* allocate node */
struct node* new_node =
(struct node*) malloc(sizeof(struct node));

/* put in the data */
new_node->data = new_data;

/* since we are adding at the begining,
prev is always NULL */
new_node->prev = NULL;

/* link the old list off the new node */
new_node->next = (*head_ref);

/* change prev of head node to new node */
if((*head_ref) != NULL)
(*head_ref)->prev = new_node ;

/* move the head to point to the new node */
(*head_ref) = new_node;
}

void printList(struct node *node)
{
while(node!=NULL)
{
printf("%d ", node->data);
node = node->next;
}
}

/* Driver program to test above functions*/
int main()
{
struct node* head = NULL;

push(&head, 2);
push(&head, 4);
push(&head, 8);
push(&head, 10);

/* delete nodes from the doubly linked list */
deleteNode(&head, head);
deleteNode(&head, head->next);
deleteNode(&head, head->next);

printList(head);
getchar();
}

