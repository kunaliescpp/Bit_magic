/*
Problem Link: https://leetcode.com/problems/single-number-ii/

Single Number II

Given an integer array nums where every element appears three times except for one, which appears exactly once.
Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,3,2]
Output: 3

Example 2:
Input: nums = [0,1,0,1,0,1,99]
Output: 99
 

Constraints:
1 <= nums.length <= 3 * 10^4
-2^31 <= nums[i] <= 2^31 - 1
*/

int singleNumber(vector<int>& nums) {
    int n = nums.size();

    int ans = 0;
    for(int i = 0; i < 32; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(nums[j]&(1<<i)) cnt++;
        }

        if(cnt%3 != 0) ans+= (1<<i);
    }
return ans;
}


