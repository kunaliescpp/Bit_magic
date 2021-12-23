/*
Problem Link: https://leetcode.com/problems/single-number-iii/

Single Number III

Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
Find the two elements that appear only once. You can return the answer in any order.
 
Example 1:
Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation:  [5, 3] is also a valid answer.

Example 2:
Input: nums = [-1,0]
Output: [-1,0]

Example 3:
Input: nums = [0,1]
Output: [1,0]
 

Constraints:
2 <= nums.length <= 3 * 10^4
-2^31 <= nums[i] <= 2^31 - 1
Each integer in nums will appear twice, only two integers will appear once.
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int Xor = 0;
        for(int i = 0; i < n; i++){
            Xor = Xor ^ nums[i];
        }
        
        // find first set bit from right
        int temp = Xor;
        int pos = 0;
        while((temp & 1) != 1){
            pos++;
            temp = temp >> 1;
        }
        
        int mask = (1<<pos);
        int x = 0;
        int y = 0;
        for(int i = 0; i < n; i++){
            // all the numbers whose last set bit is same pos as Xor
            if((nums[i] & mask) > 0) x = x^nums[i];
        }
        
        y = Xor^x;
        
    return {x, y}; 
    }
};


