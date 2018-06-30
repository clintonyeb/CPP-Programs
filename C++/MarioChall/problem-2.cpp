#include <iostream>
#include <string>

using namespace std;

int findIndex(string text, char q) {
  // cout << text << " " << q;
  for(int i = 0; i < text.length(); i++) {
    if (text[i] == q) {
      cout << i << " " << q;
      return i;
    }
 }

 return 0;
}

int main() {
 string text = "thequickbrownfoxjumpsoverthelazydog";
 string crypt = "VNOUNLUHEVJPZQWZRIIWARFJTFPGARMXSKEVYOLYXCARBANLIWVNOUNLHSKECDQMGTARDB";

 string query = "HSJPTFEVMX";
 string res = "";
//  cout << text[0] << text.length() <<  endl;

 for(int i = 0; i < query.length(); i++) {
   char q = query[i];
   int in = findIndex(text, q);
   int f = in * 2;
   cout << f;
   res += crypt[f] + crypt[f+1];
 }

cout << res;
  return 0;
}
