//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <fstream>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
#define max 100000000
//namespaces
using namespace std;

vector<string> subs;
vll nos;

bool isPowerOfTwo(ll n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
} 

void subString(string s, int n)  { 
    for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++) {
            subs.pb(s.substr(i, len)); 
            nos.pb(stoi(s.substr(i, len)));
        }
} 

//ll keep[100000000] = {0};
int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        string s; cin >> s;
        subString(s, s.length());
        ll ctr = 0;
        for(ll i = 0; i < subs.size(); i++) {
            if(subs[i][0] != '0') {
                if(isPowerOfTwo(nos[i]))
                    ctr++;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}