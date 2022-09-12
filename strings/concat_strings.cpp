#include<iostream>
#include <cstring>
using namespace std;


int main() {
    char str1[] = "Scaler ";
    char str2[] = "Topics.";

    strcat(str1, str2);
    cout<<"str1 :"<<str1<<endl;




    string str3 = "Scaler ";
    string str4 = "Topics.";

    str3.append(str4);
    cout<<"str3 :"<< str3 << endl;




    string str5 = "Scaler ";
    string str6 = "Topics.";

    str5 = str5 + str6;
    cout<<"str5 :"<< str5 << endl;

    return 0;
}