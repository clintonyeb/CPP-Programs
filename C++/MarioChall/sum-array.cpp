#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);
  int sum = 0, c;
  for(int i = 0; i < N; i++) {
    scanf("%d", &c);
    sum += c;
  }
  printf("%d", sum);
  return 0;
}

