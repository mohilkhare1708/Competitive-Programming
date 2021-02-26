#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define here std::cout << "here" << std::endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll d, i, s, v, f; cin >> d >> i >> s >> v >> f;
        unordered_map<pair<ll, ll>, pair<string, ll>> street;
        unordered_map<ll, set<ll>> keeper;
        unordered_map<string, ll> streetTime;
        for(int i = 0; i < s; i++) {
            ll b, e, l; 
            string str;
            cin >> b >> e >> str >> l;
            if(!keeper[b]) {
                set<ll> st; st.insert(e);
                keeper[b] = st;
            }
            else
                keeper[b].insert(e);
            street[mp(b, e)] = mp(str, l);
        }
        for(int i = 0; i < v; i++) {
            ll p; cin >> p;
            vector<string> route(p);
            for(int i = 0; i < p; i++) {
                cin >> route[i];
            }
        }
    }
    return 0;
}