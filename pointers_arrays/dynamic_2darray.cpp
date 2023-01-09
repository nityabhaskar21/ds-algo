#include <iostream>
using namespace std;
//defining the matrix
#define M 4
#define N 5
 
int main()
{
    
    int* a = new int[M * N]{0};//dynamically allocating memory
    
 
    // assigning values to the allocated memory
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            *(a + i*N + j) = rand() % 100;//using rand() for getting random values
        }
    }
 
    //displaying the 2D array
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << *(a + i*N + j) << " ";      
        }
        cout << endl;
    }
 
    // deallocate memory
    delete[] a;
 
    return 0;
}