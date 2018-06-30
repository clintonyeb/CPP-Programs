#include <stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  Node* next;
};

void print(Node* head){
  Node* curr = head;
  while (curr) {
    printf("%d ", curr->data);
    curr = curr -> next;
  }
}

void appendNode(Node* head, int a){
  Node* curr = head;

  while (curr -> next != NULL){
    curr = curr -> next;
  }
  
  Node* node = (struct Node*) malloc(sizeof(struct Node));
  node -> data = a;
  node -> next = NULL;

  curr -> next = node;
}

void init(Node* head, int* a, int n) {
  for(int i = 1; i < n; i++) {
    appendNode(head, a[i]);
  }
}

int main() {
  int a[8] = {10, 12, 3, 4, 5, 6, 3, 2};
  Node* head = (struct Node*) malloc(sizeof(struct Node));
  head -> data = a[0];
  head -> next = NULL;
  init(head, a, 8);
  print(head);
  appendNode(head, 54);
  print(head);
}
