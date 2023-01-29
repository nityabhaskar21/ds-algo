#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> p;
vector<vector<int>> dp;

bool isPalindrome(int i, int j, string s) {
    if (i>j) return 1;

    if (p[i][j]!=-1) return p[i][j];

    if (s[i]!=s[j]) {
    return p[i][j]=0;
    }

    return p[i][j]=isPalindrome(i+1, j-1, s);

}

int helper(int i, int j, string s) {
    if (i>j) return 0;

    if (i==j) {
    return dp[i][j]=1;
    }
    if (dp[i][j]!=-1) return dp[i][j];

    int count = 0;
    //Check if current substring is palindrome
    if (isPalindrome(i, j, s)) {
    count = helper(i+1, j, s)+helper(i, j-1, s)+1 - helper(i+1, j-1, s);
    } else {
    count = helper(i+1, j, s)+helper(i, j-1, s) - helper(i+1, j-1, s);
    }
    
    return dp[i][j]=count;
}
int countSubstrings(string s) {
    int n=s.length();
    p.resize(n, vector<int>(n, -1));
    dp.resize(n, vector<int>(n, -1));
    return helper(0, s.length()-1, s);
}

int main() {
    string s = "abab";
    cout<<countSubstrings(s);
}