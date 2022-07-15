// https://leetcode.com/problems/valid-palindrome/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        string t = "";
        for(int i = 0; i < s.length(); i++){
            if(((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))){
                t += tolower(s[i]);
            }
        }
        
        int n = t.size();
                
        int i = 0, j = n-1;
        
        while(i <= j){
            if(t[i] != t[j]){
                return false;
            }else{
                i++;j--;
            }
        }
        
        return true;
    }
};

// TC : O(n)