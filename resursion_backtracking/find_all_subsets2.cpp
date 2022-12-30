#include <iostream>
#include<vector>

using namespace std;
//https://www.youtube.com/watch?v=0N3RCWa8jFM&ab_channel=LeadCodingbyFRAZ
//https://github.com/LeadCoding/FrazArmy/blob/main/Recursion/Lecture%2007/LeetCode/Subsets.cpp

void build_subset(vector<int> &arr, int i, vector<int> &subset, vector<vector<int>> &result) {
    if (i == arr.size()) {
        result.push_back(subset);
        return;
    }

    subset.push_back(arr[i]);
    build_subset(arr, i+1, subset, result);

    subset.pop_back();
    build_subset(arr, i+1, subset, result);

    return;
}


int main() {
    vector<int> arr = {4, 5, 1};

    vector<int> subset;
    vector<vector<int>> result;

    build_subset(arr, 0, subset, result);

    for (auto set:result) {
        for (auto i:set) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}