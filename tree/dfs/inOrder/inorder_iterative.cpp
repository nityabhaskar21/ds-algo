#include <bits/stdc++.h>

using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val=val;
        left=nullptr;
        right=nullptr;
    }

};

void printOrder(vector<TreeNode*> &v) {
    for (int i=0; i<v.size(); i++) {
        cout<<v[i]->val<<" ";
    }
}

void preOrder(TreeNode *root) {
    if (root==nullptr) return;

    stack<TreeNode*> stk;
    vector<TreeNode*> v;

    while (true) {
        if (root!=nullptr) {
            stk.push(root);
            root=root->left;
        } else {
            if (stk.empty()) {
                break;
            }
            root=stk.top();
            stk.pop();
            v.push_back(root);

            root=root->right;
            
        }
    }

    printOrder(v);
}

int main() {
    TreeNode *root= new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(9);

    preOrder(root);


    return 0;

}