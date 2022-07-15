// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low < high){
            int mid = low + (high-low)/2;
            
            // if left side sorted
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
        
        return nums[low];
    }
};

// TC : O(log n)

