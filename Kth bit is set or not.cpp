/*
Problem Link: https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1

Check whether K-th bit is set or not 

Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' 
should be indexed starting with 0 from LSB side in binary representation of the number.

Example 1:
Input: N = 4, K = 0
Output: No
Explanation: Binary representation of 4 is 100, in which 0th bit from LSB is not set. So, return false.

Example 2:
Input: N = 4, K = 2
Output: Yes
Explanation: Binary representation of 4 is 100, in which 2nd bit from LSB is set. So, return true.

Example 3:
Input: N = 500, K = 3
Output: No
Explanation: Binary representation of 500 is 111110100, in which 3rd bit from LSB is not set. So, return false.
*/

class Solution{

    public:
    
    bool checkKthBit(int n, int k){
        int mask = 1<<k;
        // if((n & mask) == 1) return true;    WRONG
        // if ((n ^ mask == 0) return true;    WRONG
        if((n & mask) > 0) return true;
        
    return false;
    }
};


