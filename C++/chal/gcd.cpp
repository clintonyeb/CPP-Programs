#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main() {
  printf("%d", gcd(10, 15));
}
