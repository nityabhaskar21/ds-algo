#include <iostream>
#include<vector>

using namespace std;

vector<vector<int>> printsubsets(int i, vector<int>& arr) {
    if (i>=arr.size()) {
        return {{}};    //vector of vectors 
    }
    
    vector<vector<int>> resultFromChild = printsubsets(i+1, arr);
    vector<vector<int>> ans = {};

    int n = resultFromChild.size();
    ans.insert(ans.end(), resultFromChild.begin(), resultFromChild.end());

    for (vector<int> x: resultFromChild) {
        x.push_back(arr[i]);
        ans.push_back(x);
    }
    return ans;

}

int main() {
    vector<int> arr = {5, 2, 4};

    auto result = printsubsets(0, arr);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}