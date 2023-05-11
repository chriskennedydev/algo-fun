#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next_node;
} node;

node *add_node(node *head, int data) {
    node *temp_node = (node*) malloc(sizeof(node));
    if (temp_node == NULL) {
	printf("Unable to allocate memory!\n");
	return head;
    }
    temp_node->data = data;
    temp_node->next_node = head;
    
    head = temp_node;
    
    return head;
}

void free_list(node *head) {
    while (head != NULL) {
	node *temp = head;
	head = head->next_node;
	free(temp);
    }
}

void print_list(node *head) {
    while (head != NULL) {
	node *current = head;
	head = head->next_node;
	printf("%d\n", current->data);
    }
}

int main(void) {

    if (NULL) {
	printf("Uh oh...\n");
	return -1;
    }
    
    printf("LinkedList\n");
    node *head = NULL;
    head = add_node(head, 42);
    head = add_node(head, 17);

    print_list(head);

    free_list(head);
    
    printf("HashMap\n");
    printf("Breadth First Search\n");
    printf("Depth First Search\n");

    return 0;
}
