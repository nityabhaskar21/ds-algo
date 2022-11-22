#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> TestVector = {7};
    TestVector.push_back(2);
    TestVector.push_back(5);
    TestVector.push_back(8);
    TestVector.push_back(11);
    TestVector.push_back(14);

    for (int i = 0; i<TestVector.size(); i++) {
        cout<<TestVector[i]<<" ";
    }
    cout<<endl;


    //or
    
    vector<int> TestVector1 = {7};
    TestVector1.insert(TestVector1.end(), {2, 5, 8, 11, 14});
    cout<<"Alternate method: "<<endl;
    for (int i = 0; i<TestVector1.size(); i++) {
        cout<<TestVector1[i]<<" ";
    }
    cout<<endl;

    return 0;
}