// https://leetcode.com/problems/longest-repeating-character-replacement/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        
        int i = 0, j = 0, ans = 0, windowSize = 0, maxChar = 0;
        vector<int> cnt(26);
        
        while(j < n){
            cnt[s[j]-'A']++;
            maxChar = max(maxChar, cnt[s[j]-'A']);
            // (j-i+1) => Window Size
            // if different characters count pass k
            if(((j-i+1)-maxChar) > k){
                cnt[s[i]-'A']--;
                i++;
            }
            ans = max(ans, (j-i+1));
            j++;
        }
        
        return ans;
    }
};

// TC : O(n)