#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node* BuildOneTwoThree()
{
  struct node *head = (node*) malloc(sizeof(struct node));
  struct node *second = (node*) malloc(sizeof(struct node));
  struct node *third = (node*) malloc(sizeof(struct node));

  // allocate 3 nodes in the heap
  head->data = 1;
  head->next = second; // setup first node

  // note: pointer assignment rule
  second->data = 2;
  second->next = third; // setup second node

  third->data = 3;
  third->next = NULL; // setup third link
  // At this point, the linked list referenced by "head"
  // matches the list in the drawing.
  return head;
}

int length(struct node* head) {
  node* curr = head;
  int count = 0;

  while(curr != NULL) {
    count++;
    curr = curr -> next;
  }
  return count;
}

int main() {
  struct node* head = BuildOneTwoThree();
  printf("%i", length(head));
}
