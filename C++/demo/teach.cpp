#include <iostream>

int main() {
  using namespace std;
  char ch = 'c';
  // cout << "Enter a character " << endl;

  switch(ch) {
    case 'a':
      cout << "i am a";
      break;
    case 'b':
      cout << "i am b";
      break;
    default:
      cout << "i am wrong input";
      break;
  }
}
