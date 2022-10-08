#include<iostream>    
#include<algorithm>
#include<vector>
using namespace std;
int main()
{  
    //array initialisation
    std::vector<std::pair<int, int> > v;
    v.push_back({3, 5});
    v.push_back({1, 8});
    v.push_back({9, 6});
    v.push_back({8, 1});
    v.push_back({3, 4});

     
    cout<<"Before sorting array : \n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }
    //sort a vector-of-pairs based on the second element of the pair
    //since c++11 lambdas are introduced
    std::sort(v.begin(), v.end(), 
        [](const std::pair<int,int> &left, const std::pair<int,int> &right) {
            return left.second < right.second;
        });     
    cout<<"\nAfter sorting array : \n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}