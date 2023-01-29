#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v ={4, 3};
    v = {9, 7};

    for (auto i:v) {
        cout << i <<" ";
    }

    return 0;
}
