#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);
  long long sum = 0;
  for(int i = 0; i < N; i++) {
    long long int n;
    scanf("%lld", &n);
    sum += n;
  }

  printf("%lld", sum);
  return 0;
}

