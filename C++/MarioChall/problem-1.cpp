#include <cstdio>

struct Node {
  int data;
  Node* next;
};

void init(Node* head, int n) {
  head -> data = n;
  head -> next = head;
}

void print(Node* head) {
  Node* curr = head;
  do {
    printf("%d\n", curr -> data);
    curr = curr -> next;
  }while(curr != head);
}

void appendNode(Node* head, int n) {
  Node* t = new Node;
  t -> data = n;
  t -> next = head;

  Node* curr = head;
  do {
    if (curr -> next == head) {
      curr -> next = t;
      return;
    }
    curr = curr -> next;
  } while (curr != head);
}

Node* move(Node* head) {
  return head -> next;
}

int main() {
  int T, N;
  scanf("%d %d", &T, &N);
  Node* head = new Node;
  init(head, 1);
  for(int i = 2; i <= T; i++) {
    appendNode(head, i);
  }

  for(int i = 0; i < N; i++) {
    head = move(head);
  }
  print(head);

  return 0;
}

