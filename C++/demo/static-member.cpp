#include <iostream>

using namespace std;

class A {
  public:
   static int a;
};

int A::a = 8;

int main()
{
  cout << A::a;
  return 0;
}
