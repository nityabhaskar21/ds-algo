#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()  
{  
  
  vector<int> v = {3, 2, 6, 5};  

  auto it = lower_bound(v.begin(), v.end(), 2);  
  cout<<"Lower bound of 2 is: "<<*it << endl;    //3

  auto it2 = lower_bound(v.begin(), v.end(), 4);  
  cout<<"Lower bound of 4 is: "<<*it2 << endl;   //6


  //C++ Algorithm lower_bound() function is the version of binary search. 
  //This function is used to return an iterator pointing to the 
  //first element in the range [first, last) that is equal or greater than to the specified value val.
  //If the elements are not sorted,it will try to find lower_bound from  begin() to end()
  //if that element not found then it will go from begin() to end() and return first element which is greater than it.

  sort(v.begin(), v.end());

  auto it3 = lower_bound(v.begin(), v.end(), 2);  
  cout<<"Lower bound of 2 is: "<<*it3 << endl;    //2

  auto it4 = lower_bound(v.begin(), v.end(), 4);  
  cout<<"Lower bound of 4 is: "<<*it4 << endl;    //5  
    
  return 0;  
}  