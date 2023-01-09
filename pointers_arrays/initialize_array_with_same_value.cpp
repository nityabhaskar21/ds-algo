#include <iostream>     // std::cout
#include <algorithm>    // std::fill_n
#include <vector>       // std::vector

// Assigns val to the first n elements of the sequence pointed by first.
// OutputIterator fill_n (OutputIterator first, Size n, const T& val);

int main () {

    int n = 5;
    int val = 5;

    int arr1[n];
    std::fill_n (arr1, n, val);
    std::cout<<"Array1 contains: ";
    for (auto i:arr1) {
        std::cout << i << " ";
    }

    // With GCC compilers, we can use designated initializers. 
    // To initialize a range of elements to the same value, we can write [first ... last] = value.
    
    // int arr2[5] = {[0 ... 4] = 1};
    // std::cout<<"Array2 contains: ";
    // for (auto i:arr2) {
    //     std::cout << i << " ";
    // }
    
    // // or don't specify the size
    // int arr3[] = {[0 ... 4] = 1};
    // std::cout<<"Array3 contains: ";
    // for (auto i:arr3) {
    //     std::cout << i << " ";
    // }

  return 0;
}