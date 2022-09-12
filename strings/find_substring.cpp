#include<iostream>  
using namespace std;  


int main()  
{  
    string str= "java is the best programming language";  
    cout <<  str<<'\n';  
    cout <<"Position of the programming word is :";  
    cout<< str.find("programming")<<endl;  


    string str1= "fruit Mango is my favorite fruit";  
    cout <<  str1<<'\n';  
    cout<< "position of fruit is from position 12 :";  
    cout<< str1.find("fruit",12)<<endl;  

    //If no matches were found, the function returns string::npos.
    //npos is a static member constant value with the greatest possible value for an element of type size_t.
    cout<< "position of vegatable is  :";  
    cout<< str1.find("vegatable");  

    return 0;   
}   