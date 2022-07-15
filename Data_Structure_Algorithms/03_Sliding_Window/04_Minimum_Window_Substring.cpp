// https://leetcode.com/problems/minimum-window-substring/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();
        unordered_map<char, int> ump;
        
        for(int i = 0; i < m; i++){
            ump[t[i]]++;
        }
        
        int i = 0, j = 0, mini = INT_MAX, count = ump.size();
        string ans = "";
        while(j < n){
            if(ump.find(s[j]) != ump.end()){
                ump[s[j]]--;
                if(ump[s[j]] == 0){
                    count--;
                }
            }
            
            while(count == 0){
                if(mini > j-i+1){
                    mini = min(mini ,j-i+1);
                    ans = s.substr(i, j-i+1);
                }
                if(ump.find(s[i]) != ump.end()){
                    ump[s[i]]++;
                    if(ump[s[i]] > 0)count++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};

// TC : O(n)