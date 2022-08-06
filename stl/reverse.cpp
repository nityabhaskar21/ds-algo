#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    reverse(v.begin(), v.end());    //Directly reverses without making copy.

    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int arr1[5] = {1, 2, 3, 4, 5};
    reverse(arr1, arr1+5);

    for (int i = 0; i < 5; i++) {
        cout<<arr1[i]<<" ";
    }

    return 0;
}