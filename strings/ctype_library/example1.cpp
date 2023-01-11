#include<iostream>

using namespace std;

int main() {
    string s1 = "21s";
    for (auto &c:s1) {
        if (isdigit(c)) {
            cout<<c<<" is digit"<<endl;
        }
        if (isalpha(c)) {
            cout<<c<<" is alpha"<<endl;
        }
    }

    return 0;
}