/*
  Problem Link: https://leetcode.com/problems/defanging-an-ip-address
  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
  Memory Usage: 6 MB, less than 21.69% of C++ online submissions for Defanging an IP Address.
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.') ans += "[.]";
            else ans.push_back(address[i]);
        }
        return ans;
    }
};
