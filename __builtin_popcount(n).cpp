/*
Problem Link: https://leetcode.com/problems/number-of-1-bits/

Number of set bits in given integer
*/

// Brian Kernigham's algorigthm
  int cnt = 0;
  while( n > 0){
     n = (n & (n-1));            //n = 40; from l->r put 0 = 1 & 1 = 0 till first 
     cnt++;                      // 1 then magically 40 become 39
  }
  return cnt;


