// https://leetcode.com/problems/longest-consecutive-sequence/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = 1;
        }
        
        int ans = 0;
        int temp = 0;
        int prev = INT_MIN;
        
        for(auto i : mp){
            int a = i.first;
            if(prev == INT_MIN){
                prev = a;
                temp = 1;
            }else{
                if(prev+1 == a){
                    temp++;
                    prev = a;
                }else{
                    ans = max(ans, temp);
                    temp = 1;
                    prev = a;
                }
            }
        }
        
        ans = max(ans, temp);
        
        return ans;
    }
};


// TC : O(n log n)