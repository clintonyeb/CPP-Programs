#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::string name;
  cout << "Please enter your first name:";
  cin >> name;

  std::string greet = "Hello, " + name;

  for (int i = 0; i < 5; i+=1)
  {
    cout << "* ";
    for(int j = 0; j < greet.size(); j += 1)
    {
      if (i == 0 || i == 4)
      {
       cout << "*";
      }
      else if (i == 2) {
        cout << greet[j];
      }
      else
      {
        cout << " ";
      }
    }
    cout << " *" << endl;
  }
}
