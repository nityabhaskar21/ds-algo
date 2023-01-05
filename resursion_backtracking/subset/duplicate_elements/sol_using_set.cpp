#include <iostream>
#include<vector>
#include <set>
#include <algorithm>

using namespace std;

//https://leetcode.com/problems/subsets-ii/

void subsetsWithDupHelper(vector<int>& nums, int i, set<vector<int>> &result, vector<int> arr) {
    if (i == nums.size()) {
        result.insert(arr);
        return;
    }
    
    arr.push_back(nums[i]);
    subsetsWithDupHelper(nums, i+1, result, arr);
    
    arr.pop_back();
    subsetsWithDupHelper(nums, i+1, result, arr);
}

int main() {

    vector<int> nums = {5, 2, 2};

    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<int> arr;
    subsetsWithDupHelper(nums, 0, s, arr);
    vector<vector<int>> resultVec;
    resultVec.insert(resultVec.end(), s.begin(), s.end());

    for (int i = 0; i < resultVec.size(); i++) {
        for (int j = 0; j < resultVec[i].size(); j++) {
            cout<<resultVec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}