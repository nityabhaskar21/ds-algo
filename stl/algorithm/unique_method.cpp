//C++ Algorithm unique() function is used to transform a sequence in such a way 
//that each duplicate consecutive element becomes a unique element.

#include <iostream>  
#include <algorithm>  
#include <vector>  
  
using namespace std;  
   
int main()   
{  
    // remove duplicate elements  
    vector<int> v{1,2,3,1,2,3,3,4,5,4,5,6,7};  
    sort(v.begin(), v.end());   
    auto last = unique(v.begin(), v.end());  

    // v now holds {1 2 3 4 5 6 7 x x x x x x}, where 'x' is indeterminate  

    v.erase(last, v.end()); 

    for (int i : v)  
      cout << i << " ";  
    cout << "\n";  


    //Alternate
    vector<int> v1{1,2,3,1,2,3,3,4,5,4,5,6,7}; 
    v1.erase( unique( v1.begin(), v1.end() ), v1.end() );
      
    return 0;  
}  