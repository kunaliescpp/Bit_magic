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
1 <= nums.length <= 10   // n can be max upto 20
-10 <= nums[i] <= 10
All the numbers of nums are unique.
*/

// TC: (2^n)*n
vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();

    vector<vector<int>> ans;
    for(int i = 0; i < (1<<n); i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            if((i>>j) & 1) temp.push_back(nums[j]);
        }
        ans.push_back(temp);
    }   
return ans;
}


