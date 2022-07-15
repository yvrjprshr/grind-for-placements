// https://leetcode.com/problems/3sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
    
        for(int i = 0; i < n; i++){
            // a + b + c = 0
            // b + c = -a
            // so set a and find b, c
            int target = -nums[i];
            int l = i+1, r = n-1;
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum == target){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    // if elements are similar then move on
                    while(l < r && nums[l] == nums[l+1])l++;
                    while(l < r && nums[r-1] == nums[r])r--;
                    l++; r--;
                }else if(sum < target){
                    l++;
                }else{
                    r--;
                }
            }
            while(i+1 < n && nums[i]==nums[i+1])i++;
        }
        
        return ans;
    }
};

// TC : O(n**2)