#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 5, 3, 4, 5, 6, 3, 5};

    int count1 = count(v.begin(), v.end(), 5);
    cout<<count1<<endl;         //3

    int count2 = count(v.begin(), v.end(), 9);
    cout<<count2<<endl;         //0

    int arr[8] = {1, 5, 3, 4, 5, 6, 3, 5};
    int count3 = count(arr, arr+8, 3);
    cout<<count3<<endl;         //2

    return 0;
}