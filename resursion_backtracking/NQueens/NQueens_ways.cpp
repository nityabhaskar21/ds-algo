//Given a n*n matrix, return the total no. of ways n queens can be placed so that they dont attack each other.

#include<iostream>
#include<vector>
using namespace std;

bool canQueenBePlaced(int row, int col, vector<vector<bool>>& v) {
    int n = v.size();
    //Check for same columns above
    for (int i = 0; i < row; i++) {
        if (v[i][col] == true) return false;
    }

    //Check for left diagonal
    int j = min(row, col);
    for (int i = 1; i <= j; i++) {
        if (v[row-i][col-i] == true) return false;
    }

    //Check for right diagonal
    int k = min(row, n-col-1);
    for (int i = 1; i <= k; i++) {
        if (v[row-i][col+i] == true) return false;
    }

    return true;
}

int nQueens(int row, int n, vector<vector<bool>>& v) {
    if (row == n) {
        return 1;
    }
    int result=0;

    for (int i = 0; i < n; i++) {
        if (canQueenBePlaced(row, i, v)) {
            v[row][i] = true;
            result+=nQueens(row+1, n, v);
            v[row][i] = false;
        }
    }

    return result;
}

int main() {
    int n = 4;

    vector<vector<bool>> v(n, vector<bool>(n, false));   //2D array to place queens in the n*n matrix.

    int result = nQueens(0, n, v);
    cout<<"no. of ways for "<<n<<" queens: "<<result;


    return 0;
}