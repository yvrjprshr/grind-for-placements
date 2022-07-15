// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return root;
        
        int num = root->val;
        int p_num = p->val;
        int q_num = q->val;
        
        // left side
        if(p_num < num && q_num < num){
            return lowestCommonAncestor(root->left, p, q);
        }
        
        // right side
        if(p_num > num && q_num > num){
            return lowestCommonAncestor(root->right, p, q);
        }
        
        return root;
    }
};

// TC : O(h) -> height of the tree