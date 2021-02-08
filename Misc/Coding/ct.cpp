//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

//namespaces
using namespace std;

int f(int i, int m, char s[], int memoize[][3]) {  
    if (i == strlen(s)) 
        return 0;
    if (memoize[i][m] != -1) 
        return memoize[i][m];
    int x = s[i] - '0';
    int ans = ((x+m)%3 == 0 && x%2 == 0) + 
              f(i+1, (m+x)%3, s, memoize); 
  
    return memoize[i][m] = ans; 
} 
int countDivBy2(char s[]) 
{ 
    int n = strlen(s);  
    int memoize[n+1][3]; 
    memset(memoize, -1, sizeof memoize); 
  
    int ans = 0; 
    for (int i = 0; i < strlen(s); i++) { 
        if (s[i] == '0') 
            ans++; 
        else
            ans += f(i, 0, s, memoize); 
    } 
  
    return ans; 
} 

int main() 
{ 
    fastIO;
    ll t; cin  >> t;
    for(ll q = 0; q < t; q++) {
        string s; cin >> s;
        cout << countDivBy2(s) << endl; 
  
    return 0; 
} 