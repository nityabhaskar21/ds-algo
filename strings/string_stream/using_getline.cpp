//Parse a comma separated string in C++

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
 
vector<string> split(const string &str, char sep)
{
    vector<string> tokens;
 
    string token;
    stringstream ss(str);
    while (getline(ss, token, ',')) {
        token.erase(remove_if(token.begin(), token.end(), ::isspace), token.end()); // remove extra whitespace
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }
 
    return tokens;
}
 
int main()
{
    string str = "1, 2,3,4,,5";
    char sep = ',';
 
    vector<string> tokens = split(str, sep);
    for (auto &s: tokens) {
        cout << s << ' ';
    }
 
    return 0;
}