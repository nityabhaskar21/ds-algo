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

void inOrder(TreeNode *root) {
    if (root==nullptr) return;

    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

int main() {
    TreeNode *root= new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(9);

    inOrder(root);


    return 0;

}