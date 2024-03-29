// set::lower_bound/upper_bound
#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
  std::set<int> myset;
  std::set<int>::iterator itlow,itup;

  for (int i=1; i<10; i++) myset.insert(i*10); // 10 20 30 40 50 60 70 80 90

  //Also works for map as well in O(logn) complexity.
  itlow=myset.lower_bound (30);                //       ^
  itup=myset.upper_bound (60);                 //                   ^



  cout<<"Algotithm: "<<*upper_bound(myset.begin(),myset.end(), 60)<<endl; //This also works but time complexity is O(n)

  cout<<"lower_bound: "<<" "<<*itlow<<" "<<endl;
  cout<<"upper_bound: "<<" "<<*itup<<" "<<endl;

  return 0;
}