#include <stdio.h>
#include <math.h>

unsigned long gcd(unsigned long a, unsigned long b) {
  if(a == 0) return b;
  return gcd(b % a, a);
}

unsigned long countCommonFactors(unsigned long a, unsigned long b) {
  unsigned long n = gcd(a, b);
  unsigned long cnt = 0;
  for(unsigned long i = 1; i <= sqrt(n); i++) {
    if(n % i == 0) {
      if(n/i == i) cnt += 1;
      else cnt += 2;
    }
  }
  return cnt;
}

int main() {
  unsigned long a, b;
  scanf("%lu %lu", &a, &b);
  printf("%lu", countCommonFactors(a, b));
  return 0;
}

