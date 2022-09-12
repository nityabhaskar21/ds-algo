#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "Hello World";
  str1.erase();
  cout << "str1 After using erase(): " << str1<<endl;


  string str2 = "Hello World";
  str2.erase(2);
  cout << "str2 After using erase(2): " << str2<<endl;


  string str4 = "Hello World";
  str4.erase(2, 4);
  cout << "str4 After using erase(2, 4): " << str4<<endl;


  string str5 = "Hello World";
  str5.erase(str5.begin() + 2);
  cout << "str5 After using str5.erase(str5.begin() + 2): " << str5<<endl;


  string str6 = "Hello World";
  str6.erase(str6.begin() + 2, str6.begin() + 5);
  cout << "str6 After using erase(str6.begin() + 2, str6.begin() + 5) " << str6<<endl;



  return 0;
}