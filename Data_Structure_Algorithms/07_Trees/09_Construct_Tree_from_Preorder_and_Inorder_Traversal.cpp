// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

/*
Idea:

Preorder : root - left - right
Inorder  : left - root - right

Initialise index = 0 and Find root from preorder at given index
and find that node in inorder and so left side of that node in inorder will be left subtree
and same right side of that node in inorder will be right subtree so create node
and after that index++ and do it for left and right subtree as well
*/

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

class Solution
{
public:
    int idx = 0;
    unordered_map<int, int> m;

    TreeNode *solve(vector<int> &pre, vector<int> &in, int st, int end)
    {
        if (st > end)
            return NULL;
        TreeNode *root = new TreeNode(pre[idx]);
        idx++;
        if (st == end)
            return root;
        int mid = m[root->val];
        root->left = solve(pre, in, st, mid - 1);
        root->right = solve(pre, in, mid + 1, end);
        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int n = preorder.size();
        idx = 0;
        m.clear();
        for (int i = 0; i < n; i++)
            m[inorder[i]] = i;
        TreeNode *root = solve(preorder, inorder, 0, n - 1);
        return root;
    }
};

// TC : O(n) {n -> number of nodes}
