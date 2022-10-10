#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()  
{  
  
  vector<int> v = {3, 2, 6, 5};  

  auto it = upper_bound(v.begin(), v.end(), 2);  
  cout<<"Upper bound of 2 is: "<<*it << endl;    //6

  auto it2 = upper_bound(v.begin(), v.end(), 4);  
  cout<<"Upper bound of 4 is: "<<*it2 << endl;   //6


  //C++ Algorithm upper_bound() function is the version of binary search. 
  //This function is used to return an iterator pointing to the 
  //first element in the range [first, last) that is greater than to the specified value val.
  //If the elements are not sorted,it will try to find upper_bound from that element(if found) index to end()
  //if that element not found then it will go from begin() to end() and return first element which is greater than it.

  sort(v.begin(), v.end());

  auto it3 = upper_bound(v.begin(), v.end(), 2);  
  cout<<"Upper bound of 2 is: "<<*it3 << endl;    //3

  auto it4 = upper_bound(v.begin(), v.end(), 4);  
  cout<<"Upper bound of 4 is: "<<*it4 << endl;    //5  
    
  return 0;  
}  