#include <stdio.h>

int sumArrayMin(int * arr, int n) {
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum / n;
}

int main() {
  int n;
  scanf("%i", &n);
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%i", &arr[i]);
  }
  int min = sumArrayMin(arr, n);
  printf("%i", min+1);
  return 0;
}

