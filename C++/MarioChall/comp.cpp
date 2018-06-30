#include <cstdio>

void com(int a, int b, int& pa, int& pb) {
  if (a > b) {
    pa++;
  } if(b > a) {
    pb++;
  }
}

int main() {
  int a1, a2, a3, b1, b2, b3;
  scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
  int sa = 0, sb = 0;

  com(a1, b1, sa, sb);
  com(a2, b2, sa, sb);
  com(a3, b3, sa, sb);

  printf("%d %d", sa, sb);

  return 0;
}

