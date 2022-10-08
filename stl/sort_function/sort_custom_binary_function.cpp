#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
 
typedef std::pair<int, int> pair;

//sort a vector-of-pairs based on the second element of the pair
bool fn(const pair &x, const pair &y)
{
    return x.second < y.second;
}
 
int main()
{
    std::vector<pair> v = { { 1, 2 }, { 6, 4 }, { 3, 4 }, { 4, 1 } };
 
    std::sort(v.begin(), v.end(), fn);
 
    for (const pair &p: v) {
        std::cout << '{' << p.first << ',' << p.second << '}' << std::endl;
    }
 
    return 0;
}