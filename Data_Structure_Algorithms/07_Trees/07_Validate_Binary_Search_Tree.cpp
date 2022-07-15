// https://leetcode.com/problems/validate-binary-search-tree/

/*
check every node in a specified range
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
    
    bool check(TreeNode *root, long long l, long long r){
        if(root == NULL) return true;
        
        if(root->val >= r || root->val <= l) return false;
        
        return check(root->left, l, root->val) && check(root->right, root->val, r);
    }
    
    bool isValidBST(TreeNode* root) {
        long long int l = -1e10;
        long long int r = 1e10;
        return check(root, l, r);
    }
};
// TC : O(n)