#include <iostream>
using namespace std;  

int main() {
  string str1 = "Calculating length of string";

  cout << "The length of string str1 is: " << str1.length() << endl;


  string str2 = "C++ Programming";

  cout << "The length of string str2 is: " << str2.length() << endl;
  cout << "The capacity of string str2 is: " << str2.capacity() << endl;

  str2.resize(10);

  cout << "The string after using resize str2 is: " << str2 << endl;

  return 0;
}
