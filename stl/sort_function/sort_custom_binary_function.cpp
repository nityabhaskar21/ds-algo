#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
 
typedef std::pair<int, int> pair;

//Sorting Vector of Pairs by 1st element in ascending and 2nd element in descending
bool fn(const pair &x, const pair &y)
{   
    if (x.first!=y.first) {
         return x.first < y.first;
    } else {
        return x.second > y.second;
    }
    
}
 
int main()
{
    std::vector<pair> v = { { 1, 2 }, { 6, 4 }, { 1, 4 }, { 4, 1 } };
 
    std::sort(v.begin(), v.end(), fn);
 
    for (const pair &p: v) {
        std::cout << '{' << p.first << ',' << p.second << '}' << std::endl;
    }
 
    return 0;
}