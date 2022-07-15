// https://leetcode.com/problems/subtree-of-another-tree/

#include <bits/stdc++.h>
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
    
    bool isSame(TreeNode *a, TreeNode *b){
        if(a==NULL && b == NULL) return true;
        if(a==NULL && b != NULL) return false;
        if(a!=NULL && b == NULL) return false;
        return (a->val == b->val) && isSame(a->left, b->left) && isSame(a->right, b->right);
    }
    
    bool help(TreeNode *a, TreeNode *b){
        if(a == NULL || b == NULL) return false;
        bool x;
        if(a->val == b->val){
            x = isSame(a, b);
        }
        bool y = help(a->left, b);
        bool z = help(a->right, b);
        return x || y || z;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return help(root, subRoot);
    }
};

// TC : O(n^2)