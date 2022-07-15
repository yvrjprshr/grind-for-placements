// https://leetcode.com/problems/container-with-most-water/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int i = 0, j = n-1;
        
        int ans = 0;
        
        while(i < j){
            int left = height[i], right = height[j];
            ans = max(ans, min(left, right)*(j-i)); // formula of area of rectangel : length * breadth
            if(left > right){
                j--;
            }else{
                i++;
            }
        }
        
        return ans;
    }
};

// TC : O(n)