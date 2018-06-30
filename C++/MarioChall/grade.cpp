#include <cstdio>

int round(int n) {
  if (n < 38) return n;
  int factor = (n / 5 + 1) * 5;
  if (factor - n < 3)
    return factor;
  return n;
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int s;
    scanf("%d", &s);
    printf("%d\n", round(s));
  }
  return 0;
}

