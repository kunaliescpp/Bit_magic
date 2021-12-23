/*
Problem Link: https://leetcode.com/problems/subsets/

Subsets

Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]
 

Constraints:
1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        int n = nums.size();
        for(int i = 0; i < (1<<n); i++){
            int idx = 0;
            vector<int> v;
            for(int num = i; num > 0; num = num>>1){
                if((num & 1) == 1) v.push_back(nums[idx]);
                idx++;
            }
            ans.push_back(v);
        }
        
    return ans;
    }
};


