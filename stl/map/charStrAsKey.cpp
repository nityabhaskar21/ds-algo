#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

string getKey(string str) {
    vector<int> count(26);
    for (int j = 0; j < str.size(); j++) {
        count[str[j] - 'a']++;
    }
    
    string key = "";
    for (int i = 0; i < 26; i++) {
        key.append(to_string(count[i])+'a');    //Simply using count[i] could give some clashes
        // example "bdddddddddd","bbbbbbbbbbc"
    }
    return key;
}

int main() {
    unordered_map<string, int> m;
    vector<string> strs = {"abc", "def", "bca", "aae"};

    for (int i = 0; i < strs.size(); i++) {
        string key = getKey(strs[i]);
        m[key]++;
    }

    for (auto &ele:m) {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    // 20001000000000000000000000 1
    // 00011100000000000000000000 1
    // 11100000000000000000000000 2
    

    return 0;
}