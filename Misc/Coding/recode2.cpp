//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

bool isPalindrome(string str) { 
    int l = 0; 
    int h = str.length() - 1; 
    while (h > l) { 
        if (str[l++] != str[h--]) {  
            return false;
        } 
    } 
    return true; 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        string s; cin >> s;
        if(s.length() <= 2)
            cout << "YES" << endl;
        else if(isPalindrome(s)])
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}