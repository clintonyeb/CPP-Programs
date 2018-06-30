#include <iostream>

void add(int& a) {
  ++a;
}

int main()
{
  int a = 4;
  add(&a);
  std::cout << a << std::endl;

}
