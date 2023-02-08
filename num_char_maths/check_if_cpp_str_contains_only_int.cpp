#include<iostream>

using namespace std;

//Parses the C-string str interpreting its content as an integral number of the specified base, 
//which is returned as a long int value. If endptr is not a null pointer, 
//the function also sets the value of endptr to point to the first character after the number.

// long int strtol (const char* str, char** endptr, int base); 
// Parameters:-

// str
// C-string beginning with the representation of an integral number.

// endptr
// Reference to an object of type char*, whose value is set by the function 
// to the next character in str after the numerical value.
// This parameter can also be a null pointer, in which case it is not used.

// base
// Numerical base (radix) that determines the valid characters and their interpretation.
// If this is 0, the base used is determined by the format in the sequence (see above).

int main() {
    char* p1;
    string s1 = "7hi";
    long converted1 = strtol(s1.c_str(), &p1, 10);
    if (*p1) {
        // conversion failed because the input wasn't a number
        cout<<s1+": Not a number";
    }
    else {
        // use converted
        cout<<s1+": A number";
    }
    cout<<endl;
    char* p2;
    string s2 = "34";
    long converted2 = strtol(s2.c_str(), &p2, 10);
    if (*p2) {
        // conversion failed because the input wasn't a number
        cout<<s2+": Not a number";
    }
    else {
        // use converted
        cout<<s2+": A number";
    }
}
