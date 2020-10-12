#include <bits/stdc++.h> 
using namespace std; 
  
// Limit on N and K 
const int M = 40; 
  
// 2D array memo for stopping  
// solving same problem again 
int memo[M][M]; 
  
// method recursively calculates  
// permutation with K inversion 
int numberOfPermWithKInversion(int N, int K) 
{ 
      
    // base cases 
    if (N == 0) 
        return 0; 
    if (K == 0) 
        return 1; 
  
    // if already solved then  
    // return result directly 
    if (memo[N][K] != 0) 
        return memo[N][K]; 
  
    // calling recursively all subproblem  
    // of permutation size N - 1 
    int sum = 0; 
    for (int i = 0; i <= K; i++) 
    { 
        if (i <= N - 1) 
            sum = ((sum % 2) + (numberOfPermWithKInversion(N - 1, K - i) % 2))%2; 
    } 
  
    // store result into memo 
    memo[N][K] = sum; 
  
    return sum; 
} 
  
// Driver code  
int main() 
{ 
    int ans[201][201];
    int x = 35;
    memset(ans, -1, sizeof(ans));
    cout << "here" << endl;
    for(int i = 1; i <= x; i++) {
        for(int j = 1; j <= i; j++)
            ans[i][j] = numberOfPermWithKInversion(i, j) % 2;
    }
    cout << "here" << endl;
    for(int i = 1; i <= x; i++) {
        for(int j = 1; j <= i; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0; 
} 