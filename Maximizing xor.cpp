/*
Problem Link: https://www.hackerrank.com/challenges/maximizing-xor/problem

Given two integers, l and r, find the maximal value of a^b, where a and b satisfy the following condition:
l <= a <= b <= r
For example, if l = 11 and r = 12, then
11^11 = 0
11^12 = 7
12^12 = 0

Examples: 
Input1: 10 15
Output1: 7

Input2: 11 100
Output2: 127
*/

#include<bits/stdc++.h>
using namespace std;

//Maximizing XOR
int main(){

   int l, r;              
   cin >> l >> r;        // 10->15

   int x = l^r;          // 1010 ^ 1111 = 101
   int ans = 0;          // ans = all 3 bits are set bits (must lie in the range) 
   int pos = 0;
   while(x > 0){
       ans += (1<<pos);   // binary to dec
       x = x>>1;
       pos++;
   }
   cout << ans;         // 111

return 0;
}


