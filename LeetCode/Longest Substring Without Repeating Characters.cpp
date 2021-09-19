/*
  Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;        
        for(int i = 0; i < s.size(); i++){
            map<char, int>mp;        
            for(int j = i; j < s.size(); j++){                
                if(mp[s[j]])
                    break;
                else{
                    res = max(res, j - i + 1);
                    mp[s[j]]++;
                }                    
            }            
        }
        return res;        
    }
};
