#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,x,y) for(long long i = x; i < y; i++)
#define MOD 1000000007
#define here std::cout << "here" << std::endl
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        string str; cin >> str;
        if(s(str) == 1) {cout << "not balanced\n"; continue;}
        map<char, char> close;
        close['('] = ')';
        close['['] = ']';
        close['{'] = '}';
		// here;
        stack<char> check;
		// cout << check.top() << endl;
		// here;
        fo(i, 0, s(str)) {
			if(check.empty())
				continue;
            if(str[i] == close[check.top()])
				check.pop();
            else 
				check.push(str[i]);
        }
        if(check.empty()) cout << "balanced\n";
        else cout << "not balanced\n";
    }
    return 0;
}