/*
Problem Link: https://codeforces.com/problemset/problem/535/B

You are given a lucky number n. Lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, 
numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
If we sort all lucky numbers in increasing order, what's the 1-based index of n?

Input
The first and only line of input contains a lucky number n (1 ≤ n ≤ 109).

Output
Print the index of n among all lucky numbers.

Examples: 
Input1: 4
Output1: 1

Input2: 7
Output2: 2

Input3: 77
Output3: 6
*/

#include <bits/stdc++.h>
using namespace std;

// find number smaller than given number
int smallerNumbers(char arr[], int n){
    
    long long ans = 0;
    ans = (1<<n) - 2;         // 2^n - 2 (for n-1 digits)
    
    // for nth digit
    int pos = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == '7') ans += (1<<pos);
        pos++;
    }

return ans;
}

int main(){

    char arr[20];
    cin >> arr;

    int len = strlen(arr);
    int idx = smallerNumbers(arr, len) + 1;      // 1 based indexing

    cout << idx << endl;
return 0;
}


