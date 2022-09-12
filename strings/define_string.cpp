#include<iostream>
using namespace std;


int main() {
    string str1 = "hello1";
    string str2("hello2");
    cout<<"str1 :"<<str1<<endl;
    cout<<"str2 :"<<str2<<endl;

    //C style strings
    char str3[7] = {'h', 'e', 'l', 'l', 'o', '3', '\0'};
    char str4[] = {'h', 'e', 'l', 'l', 'o', '4', '\0'};
    cout<<"str3 :"<<str3<<endl;
    cout<<"str4 :"<<str4<<endl;

    //Alternatively
    char str5[] = "hello5";
    char str6[7] = "hello6";
    cout<<"str5 :"<<str5<<endl;
    cout<<"str6 :"<<str6<<endl;

    return 0;
}