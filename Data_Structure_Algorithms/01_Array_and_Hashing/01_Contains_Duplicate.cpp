// https://leetcode.com/problems/contains-duplicate/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ust;
        for(int i = 0; i < nums.size(); i++){
            if(ust.find(nums[i]) == ust.end()){
                ust.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};


// Complexities

// search
// set : O(logn) , unordered_set: O(1) best_case, O(n) worst_case when we will have more elements

// Insertion
// set : O(logn) + Rebalance , unordered_set: O(1) best_case, O(n) worst_case when we will have more elements

// Deletion
// set : O(logn) + Rebalance , unordered_set: O(1) best_case, O(n) worst_case when we will have more elements


// TC : Best / Average Case : 0(n)
// TC : Worst Case : 0(n**n)