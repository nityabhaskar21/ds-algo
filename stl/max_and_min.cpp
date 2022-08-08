#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a[5] = { 0, 7, 1, 2, 3};
    int min_ele1 = *min_element(a, a+5);    //min_element return a pointer
    cout<<min_ele1<<endl;

    vector<int> v{7, 1, 2, 3};
    int max_ele2 = *max_element(v.begin(), v.end());    //max_element return a pointer
    cout<<max_ele2<<endl;

    return 0;
}