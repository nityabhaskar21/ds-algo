#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixFunction(string s) {
    int n = s.length();

    int i = 1, prev = 0;
    vector<int> lps(n, 0);

    while (i < n) {
        if (s[i] == s[prev]) {
            lps[i] = prev+1;
            i++;
            prev++;
        } else if (prev == 0) {
            lps[i] = 0;
            i++;
        } else {
            prev = lps[prev-1];
        }
    }
    return lps;
}

int main() {

    vector<int> lps = prefixFunction("abcababcab");
    for (int i = 0; i < lps.size(); i++) {
        cout << lps[i] << " ";
    }
    return 0;
}