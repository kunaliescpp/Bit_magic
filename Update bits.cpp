/*
Problem Link: https://www.lintcode.com/problem/179/

Update Bits

Given two 32-bit numbers, N and M, and two bit positions, i and j. Write a method to set all bits between i and j in N equal to M
(e g , M becomes a substring of N start from i to j)

In the function, the numbers N and M will given in decimal, you should also return a decimal number.
You can assume that the bits j through i have enough space to fit all of M. That is, if M=10011， you can assume that there are at 
least 5 bits between j and i. You would not, for example, have j=3 and i=2, because M could not fully fit between bit 3 and bit 2.

Example 1:
Input: N=(10000000000)2 M=(10101)2 i=2 j=6
Output: N=(10001010100)2

Example 2:
Input: N=(10000000000)2 M=(11111)2 i=2 j=6
Output: N=(10001111100)2
*/

class Solution {
public:
    
    int clearRange(int n, int i, int j){
        int ones = (~0);
        int a = ones << (j+1);
        if(j+1 == 32) a = 0;
        
        int b = (1 << i)-1;

        int mask = a | b;

        int ans = n & mask;
    return ans;
    }

    int updateBits(int n, int m, int i, int j) {
        int num = clearRange(n, i, j);
        int ans = num | (m << i);

    return ans;
    }
};


