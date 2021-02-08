#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, k;
		string s; cin >> n >> k >> s;
        vector<ll> ones;
		for(ll i = 0; i < s.length(); i++) if(s[i] == '1') ones.push_back(i);
		vector<ll> gaps;
		if(n == k && !ones.empty())
			cout << "0" << endl;
		else if(n == k)
			cout << "1" << endl;
		else if(!ones.empty()) {
			gaps.push_back(ones[0]);
			for(ll i = 1; i < ones.size(); i++)
				gaps.push_back(ones[i] - ones[i-1] - 1);
			gaps.push_back(n - (1 + ones[ones.size()-1]));
			ll ans = 0;
			for(auto x : gaps) cout << x << " "; cout << endl;
			// for(auto x : gaps) ans += x/(k+1);
			for(ll i = 0; i < gaps.size(); i++) {
				if(i != 0 && i != gaps.size()-1) {
					cout << (gaps[i]-2*k)/(k) << endl;
					if((gaps[i]-2*k)/(k) >= 0 && (gaps[i]-2*k) % (k) != 0)
						ans += (gaps[i]-2*k)/(k);
					else 
						continue;
				}
				else {
					
					ans += gaps[i]/(k+1);
				}
				cout << "\t" << ans << endl;
			}
			cout << ans << endl;
		}
		else {
			cout << ceil((double)n/(double)(k+1)) << endl;
		}
    }
}