#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream f;
  f.open("myfile.txt", ios::in | ios::out);
  string text;
  cout << "write text to be written to file" << endl;
  getline(cin, text);
  f << text << endl;

  f >> text;
  cout << "You text is: " << text << endl;

  f.close();

}
