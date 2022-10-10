#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()  {
    vector<int> v = {2, 3, 4, 5, 7}; //Sorted array

    auto it = upper_bound(v.begin(), v.end(), 3);

    cout<<"upper bound of 3: "<<*it<<endl;
    cout<<"index of upper bound of 3: "<<it-v.begin()<<endl;

    return 0;
}  