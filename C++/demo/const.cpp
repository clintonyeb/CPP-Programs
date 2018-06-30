#include <iostream>

class A {
  public:
    int x;

    A() {
      x = 5;
    }
};

int main() {
  const int a = 10;
  int b = 5;
  const int* const p = &a;
  std::cout << a << std::endl;

  const A o;
}
