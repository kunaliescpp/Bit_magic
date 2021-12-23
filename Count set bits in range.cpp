/*
Problem Link: https://leetcode.com/problems/single-number/

Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1
 

Constraints:
1 <= nums.length <= 3 * 10^4
-3 * 10^4 <= nums[i] <= 3 * 10^4
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
        int x = nums[0];
        for(int i = 1; i < nums.size(); i++){
            x = x ^ nums[i];
        }
    
    return x;
    }
};


