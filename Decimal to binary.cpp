/* 
Problem Link: https://practice.geeksforgeeks.org/problems/decimal-to-binary-1587115620/1#

Decimal to binary 

Given a decimal number N, compute its binary equivalent.

Example 1:
Input: N = 7
Output: 111

Example 2:
Input: N = 33
Output: 100001
*/

void toBinary(int n){
    
    int ans = 0;
    int succ = 1;
    while(n > 0){
        int last_bit = n&1;
        ans += succ*last_bit;
        
        succ = succ*10;
        n = n >> 1;
    }
}


