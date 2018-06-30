#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int s = 0, p = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        p += arr[i][j];
      }
      if((i + j) == (n - 1)) {
        s += arr[i][j];
      }
    }
  }
  int a = p-s;
  printf("%d", a >= 0 ? a : -a );
  return 0;
}
