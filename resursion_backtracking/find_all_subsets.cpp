#include <iostream>
#include<vector>

using namespace std;

vector<vector<int>> printsubsets(int i, vector<int>& arr, vector<vector<int>>& result) {
    if (i==arr.size()) {
        vector<int> empty;
        result.push_back(empty);
        return result;
    }
    
    vector<vector<int>> resultFromChild = printsubsets(i+1, arr, result);
    // if (i==arr.size()-1) {
    //     vector<int> v = {arr[i]};
    //     resultFromChild.push_back(v);
    //     return resultFromChild;
    // }
    int n = resultFromChild.size();
    result.insert(resultFromChild.begin(), resultFromChild.end());
    for (int j = 0; i < n; i++) {
        resultFromChild[j].push_back(arr[i]);
    }
    return resultFromChild;

}

int main() {
    vector<int> arr = {5, 2, 4};
    vector<vector<int>> result;

    result = printsubsets(0, arr, result);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}