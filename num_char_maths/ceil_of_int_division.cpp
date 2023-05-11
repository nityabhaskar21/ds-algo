#include<iostream>

using namespace std;

int main() {
    int a=15;
    int b=4;

    int floor_division = a/b;
    cout<<"Floor division of:"<<a<<"/"<<b<<": "<<floor_division<<endl;
    
    // 1 + ((a - 1) / b)      for avoiding overflow of a+b.
    int ceil_division = (a+b-1)/b;
    cout<<"Ceil division of:"<<a<<"/"<<b<<": "<<ceil_division<<endl;


}