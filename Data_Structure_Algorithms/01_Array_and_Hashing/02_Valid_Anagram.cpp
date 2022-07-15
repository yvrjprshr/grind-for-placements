// https://leetcode.com/problems/valid-anagram/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26];
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < s.length(); i++){
            arr[s[i]-'a']++;
        }
        for(int i = 0; i < t.length(); i++){
            arr[t[i]-'a']--;
        }
        for(int i = 0 ; i < 26; i++){
            if(arr[i] != 0) return false;
        }
        return true;
    }
};

// TC: O(n)