#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> st = {7, 2, 1, 9};

    for (auto &n:st) {
        cout<<n<<" ";       //1 2 7 9
    }

    return 0;
}
