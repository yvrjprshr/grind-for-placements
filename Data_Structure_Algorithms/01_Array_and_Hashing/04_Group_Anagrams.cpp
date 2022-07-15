// https://leetcode.com/problems/group-anagrams/

/*
Idea

For grouping Anagrams
 store all anagrams in key value pair form in map
 map<sorted_string, vector_of_all_anagram_strings> mp
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};

// TC: O(n * string_len_100 * log_string_len_100)