// https://leetcode.com/problems/top-k-frequent-elements/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        map<int, int>mp;
        
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        
        vector<vector<int>>v;
        
        for(auto &i : mp){
            v.push_back({i.second, i.first});
        }
        
        sort(v.rbegin(), v.rend());
        
        vector<int> ans;
        
        for(int i = 0; i < k; i++){
            ans.push_back(v[i][1]);
        }
        
        return ans;
    }
};

// TC : O(n * log n)

