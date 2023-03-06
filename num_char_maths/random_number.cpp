#include <bits/stdc++.h>

using namespace std;

int main() {
    int minRange=3;
    int maxRange=14;

    int range = maxRange-minRange+1;

    // This causes the program to start generating numbers from a different point in the sequence every time it is run, 
    // making it appear to be less predictable.
    srand(time(0));


    cout<<"Random between "<<minRange<<" and "<<maxRange<<" : "<<rand() % range + minRange<<endl;

    return 0;
}
