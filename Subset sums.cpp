/*
Problem Link: https://www.spoj.com/problems/SUBSUMS/

SUBSUMS - Subset Sums

Given a sequence of N (1 ≤ N ≤ 34) numbers S1, ..., SN (-2*10^7 ≤ Si ≤ 2*10^7), determine how many subsets
of S (including the empty one) have a sum between A and B (-5*10^8 ≤ A ≤ B ≤ 5*10^8), inclusive.

Input : The first line of standard input contains the three integers N, A, and B. The following N lines contain S1 
through SN, in order.

Output Print a single integer to standard output representing the number of subsets satisfying the above property. 
Note that the answer may overflow a 32-bit integer.

Example
Input: N = 3 , A = -1, B = 2
{1, -2, 3}
Output: 5
The following 5 subsets have a sum between -1 and 2:
0 = 0 (the empty subset)
1 = 1
1 + (-2) = -1
-2 + 3 = 1
1 + (-2) + 3 = 2
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
vector<int> subsetSum(vector<int>& v, int n){
   
   vector<int> ans;
   for(int i = 0; i < (1<<n); i++){
      int idx = 0;
      int sum = 0;
      for(int num = i; num > 0; num = num>>1){
         if((num & 1) == 1){
            sum += v[idx];
            // cout << "check" << v[idx] << " " << sum << endl;
         }
            idx++;
      }
      ans.push_back(sum);
   }
 
return ans;
}
 
//subset sum of set which lies in the given range
int32_t main(){
   
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
 
   int n, l, r;
   cin >> n >> l >> r;      // 1 <= n <= 34 (2^34 - 1 is very large)
   
   //split set into 2 parts, so 2^17 & 2^17 should be managable
   vector<int> v1;
   for(int i = 0; i < n/2; i++){
      int x;
      cin >> x;
      v1.push_back(x);
   }
   
   vector<int> v2;
   for(int i = 0; i < (n-(n/2)); i++){
      int x;
      cin >> x;
      v2.push_back(x);
   }
 
   // subset sum of vector v1 & v2
   vector<int> sv1 = subsetSum(v1, n/2);
   vector<int> sv2 = subsetSum(v2, n-(n/2));
 
   sort(sv1.begin(), sv1.end());
   sort(sv2.begin(), sv2.end());
 
   int ans = 0;
   for(int i = 0; i < sv1.size(); i++){
      int idx1 = lower_bound(sv2.begin(), sv2.end(), l-sv1[i])-sv2.begin();
      int idx2 = upper_bound(sv2.begin(), sv2.end(), r-sv1[i])-sv2.begin()-1;
 
      ans += (idx2-idx1+1);
   }
 
   cout << ans << endl;
 
return 0;
}
 
 
