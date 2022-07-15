// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int leftMin = prices[0];
        int ans = 0;
        
        for(int i = 1; i < n; i++){
            ans = max(ans, prices[i]-leftMin);
            leftMin = min(leftMin, prices[i]);
        }
        
        return ans;
    }
};

// TC : O(n)