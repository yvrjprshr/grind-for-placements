// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

/*
Inorder Traversal of Any BST is sorted
*/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorder(TreeNode *root, vector<int> &store){
        if(root != NULL){
            inorder(root->left, store);
            store.push_back(root->val);
            inorder(root->right, store);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);
        return ans[k-1];
    }
};

// TC : O(n)