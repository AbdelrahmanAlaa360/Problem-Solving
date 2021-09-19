/*
  Problem Link: https://leetcode.com/problems/two-sum
  Runtime: 8 ms, faster than 94.80% of C++ online submissions for Two Sum.
  Memory Usage: 10.3 MB, less than 65.09% of C++ online submissions for Two Sum.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans, copyVect;
        copyVect = nums;
        sort(nums.begin(), nums.end());        
        int sum, p1 = 0, p2 = nums.size() - 1;
        sum = nums[p1] + nums[p2];
        while(p1 < p2){
            if(sum == target){                        
                break;
            }
            else if(sum > target){
                sum -= nums[p2];                
                sum += nums[--p2];
            }
            else{            
                sum -= nums[p1];
                sum += nums[++p1];
            }
        }
        for(int i = 0; i < copyVect.size(); i++){
            if(copyVect[i] == nums[p1])
                ans.push_back(i);
            else if(copyVect[i] == nums[p2])
                ans.push_back(i);
        } 
        return ans;
    }
};


