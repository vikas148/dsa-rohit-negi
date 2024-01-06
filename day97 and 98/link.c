// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

int main() {
  // Initialize nodes
 
  struct node *one = malloc(sizeof(struct node)); ;
  struct node *two = malloc(sizeof(struct node));;
  struct node *three = malloc(sizeof(struct node));;
  struct node *head=one;
  // Allocate memory
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next =two;
  two->next =three;
  three->next =NULL;
printf("%d\n",head->value);

printf("%d\n",head->next->value);
printf("%d\n",head->next->next->value);
printf("%d\n",head);
printf("%d\n",head->next);
printf("%d\n",head->next->next);
printf("%d\n",head->next->next->next);
  // printing node-value
  //head = one;
  //printLinkedlist(head);
}