// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
  std::string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  std::string str2 = str.substr (3,5);     // "think"

  std::size_t pos = str.find("live");      // position of "live" in str

  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << str2 << endl << str3 << '\n';

  return 0;
 
}