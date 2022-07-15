// https://leetcode.com/problems/product-of-array-except-self/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n), suff(n), ans(n);
        for(int i = 0; i < n; i++){
            pref[i] = (i == 0) ? nums[i] : nums[i]*pref[i-1];
        }
        for(int i = n-1; i >= 0; i--){
            suff[i] = (i == n-1) ? nums[i] : nums[i]*suff[i+1];
        }
        for(int i = 0; i < n; i++){
            if(i == 0)ans[i] = suff[i+1];
            else if(i == n-1)ans[i] = pref[i-1];
            else ans[i] = pref[i-1]*suff[i+1];
        }
        return ans;
    }
};

// TC : O(n)