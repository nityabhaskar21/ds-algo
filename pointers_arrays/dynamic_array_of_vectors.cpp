#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //int *x = new int[100];                       To create a dynamically-allocated array,

    std::vector<int> *x = new vector<int>[10];   //To create an array of 10 vector<int> elements

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            x[i].push_back(j);          // OR   x[i][j] = j    will also work
            // x[i][j] = j;
            
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            // cout<<x[i].at(j)<<" ";      // OR   cout<<x[i][j]   will also work
            cout<<x[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}
