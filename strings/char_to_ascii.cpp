#include <iostream>  
using namespace std; 

int main() {
    
    //char to ASCII
    char c1= 'c';
    cout<<c1<<", ascii:"<<int(c1)<<endl;


    //indexing according to 'a', i.e. a=0, b=1, c=2 ... etc
    cout<<c1<<", index:"<<int(c1-'a')<<endl;

    //int to char
    int i1=102;
    char c2 = char(i1);
    cout<<i1<<", char:"<<c2<<endl;


    return 0;
}