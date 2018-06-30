#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  // cout << a << endl;
  // cout << &a << endl;
  int* p;
  p = &a;
  cout << p[0] << endl;
  // cout << &*p << endl;
  return 0;
}
