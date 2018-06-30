#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  Node* next;
};

void display(Node* head){
  Node* curr = head;
  while (curr) {
    printf("%d ", curr -> data);
    curr = curr -> next;
  }
  printf("\n");
}

Node* createNode(int n){
  Node* node = (struct Node*) malloc (sizeof(struct Node));
  node -> data = n;
  node -> next = NULL;
  return node;
}

void appendNode(Node* head, int n){
  Node* curr = head;
  while (curr -> next != NULL){
    curr = curr -> next;
  }
  Node* node = createNode(n);
  curr -> next = node;
}

void insertBeginning(Node** head, int n) {
  Node* node = createNode(n);
  node -> next = *head;
  *head = node;
}

int main() {
  Node* head = (struct Node*) malloc (sizeof(struct Node));
  head = createNode(1);
  printf("Enter number to show linked list\n");
  int n;
  scanf("%d", &n);

  for (int i = 2; i <= n; i++){
    appendNode(head, i);
  }

  insertBeginning(&head, 200);

  display(head);
  return 0;
}
