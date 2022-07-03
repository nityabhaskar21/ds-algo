#include <iostream>
#include <vector>

using namespace std;
 
#define M 3
#define N 4
 
int main()
{
    // specify the default value to fill the vector elements
    int default_value = 1;
 
    // instantiate vector object of type std::vector<int>
    std::vector<std::vector<int>> matrix;
 
    // resize the vector to `M` elements of type std::vector<int>,
    // each having size `N` and default value
    matrix.resize(M, std::vector<int>(N, default_value));
 
    // print the two-dimensional vector
    for (int i = 0; i < M; ++i){
        for (int j = 0; j < N; ++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
 
    return 0;
}